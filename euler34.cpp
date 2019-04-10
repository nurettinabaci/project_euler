#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// answer is 40730
unsigned long factorial(int num) {
	unsigned long factorial = 1;
	for (int i = 1; i <= num; ++i)
		factorial *= i;
	return factorial;
}

unsigned long digitsum(int num) {
	unsigned long fact_sum = 0;
	int residual = 0;
	while (num) {
		residual = num % 10;
		fact_sum += factorial(residual);
		num = num / 10;
	}
	return fact_sum;
}


int main()
{
	unsigned long sum = 0;
	vector<unsigned long> arr;
	for (unsigned long i = 145; i <= 1499999; i++)
		if (digitsum(i) == i) {
			sum += i;
			cout << i << "\n";
		}
	cout << sum;
	return 0;
}