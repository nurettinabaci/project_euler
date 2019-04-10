#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Return : vector of digits of a number
vector<int> digits_to_vector(int num) {
	vector<int> digits;
	unsigned long fact_sum = 0;
	int residual = 0;
	while (num) {
		residual = num % 10;
		digits.push_back(residual);
		num = num / 10;
	}
	return digits;
}
int VectorToInt(vector<int> v)
{
	reverse(v.begin(), v.end());
	int decimal = 1;
	int total = 0;
	for (auto& it : v)
	{
		total += it * decimal;
		decimal *= 10;
	}
	return total;
}
vector<int> rotLeft(vector<int> a, int d) {

	vector<int> b;
	for (int i = d; i < a.size(); i++)
		b.push_back(a[i]);
	for (int i = 0; i < d; i++)
		b.push_back(a[i]);
	return b;
}
bool isPrime(int a) {
	if (a == 1) return false;
	int i = 2;
	while (i * i <= a) {
		if (a % i == 0)
			return false;
		i++;
	}
	return true;
}


// Return : prime numbers that fits 
bool checkEveryInstance(int num) {
	vector <int> digits = digits_to_vector(num);
	int d = digits.size() - 1;
	vector<int> b;
	for (int i = 0; i <= d; i++) {
		int ourNumber = VectorToInt(rotLeft(digits, i));
			b.push_back(ourNumber);
	}
	bool check = true;
	for (int i = 0; i < b.size(); i++) {
		if (!isPrime(b[i]))
			check = false;
	}
	return check;
}

int main() // MAIN----
{
	cout << VectorToInt(rotLeft(digits_to_vector(101),2)) << endl;
	cout << isPrime(79) << endl;

	int count = 0;
	for (unsigned long i = 2; i < 1000000; i++)
		if (checkEveryInstance(i))
			count++;

	cout << count;
	return 0; 
}

