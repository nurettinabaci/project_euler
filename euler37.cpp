#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

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

bool solve(int num) {
	if (!isPrime(num)) return false;

	string leftToRight = to_string(num);
	string rightToLeft = to_string(num);


	while (leftToRight.size() > 1 || leftToRight.size() > 1) {
		// try from right to left
		rightToLeft.erase(rightToLeft.end() - 1);
		if (!isPrime(atoi(rightToLeft.c_str())))
			return false;

		// try from left to right
		leftToRight.erase(leftToRight.begin());
		if (!isPrime(atoi(leftToRight.c_str())))
			return false;
		cout << "rightToLeft  " << rightToLeft << endl;
		cout << "leftToRight  " << leftToRight << endl;
	}
	return(true);
}

int main()
{
	unsigned long sum = 0;
	short count = 0; // 11 tane olacak

	for (unsigned long i = 10; i < 1000000; i++) {
		if (solve(i)) {
			sum += i;
			count++;
			if (count == 11) {
				cout << "Count is 11 " << " and the sum is " << sum << endl;
				break;
			}

		}
	}

	cout << sum;
	return 0;
}