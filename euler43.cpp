#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
#include <cmath>
using namespace std;
//std::next_permutation denenebilir

int Pandigital_Num(unsigned long int n) {

	int ctr[] = { 0,0,0,0,0,0,0,0,0,0 };
	int rem;
	int i;

	if (n < 1023456789) {
		return 0;
	}
	while (n) {
		// get the first digit of n
		rem = n % 10;

		/*increase its relative counter in
		ctr[];
		*/
		ctr[rem]++;

		//advance n to delete first digit
		n = n / 10;
	}
	/*check if a digit have 0 count
	if count = 0 => n is not pandigital
	else
		if all digit counts > 0
		  => n is pandigital
	*/
	for (i = 0; i < 10; i++) {
		if (ctr[i] != 1) {
			return 0;
		}
	}
	return 1;
}
vector<long> generatePandigital() {
	unsigned long num = 1023456789;
	vector <long> pans;

	while (num < 10000000000) {
		if (Pandigital_Num(num))
			pans.push_back(num);
		num++;
	}
	return pans;
}
bool checkSituation(long num) {
	vector<int> divisors = { 2, 3, 5, 7, 11, 13, 17 };
	string number = to_string(num);
	string part = "";
	for (int i = 1; i < 8; i++) {
		part = "";
		for (int j = i; j < i + 3; j++)
			part.push_back(number[j]);

		for (int i = 0; i < divisors.size(); i++)
		{
			if (stoi(part) % divisors[i] == 0)
				// burdan devam
		}
	}
}
int main() {
	vector<long> pans = generatePandigital();
	int len = pans.size();
	for (int i = 0; i < len; i++)
	{
		cout << pans[i] << endl;

	}
}