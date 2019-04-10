#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

// Answer is 872187
std::string toBinary(int n)
{
	std::string r;
	while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
	return r;
}
string reverseStr(string & str)
{
	string newStr = str;
	int n = newStr.length();

	for (int i = 0; i < n / 2; i++)
		swap(newStr[i], newStr[n - i - 1]);
	return newStr;
}

bool isPalindrome(int num)
{
	string number = to_string(num);
	string reversedNumber = reverseStr(number);

	std::string binary = toBinary(num);
	string reversedbinary = reverseStr(binary);
	return ((reversedNumber == number) && (binary == reversedbinary));
}

int main()
{
	cout << toBinary(1) << endl;

	unsigned long sum = 0;
	for (unsigned long i = 1; i < 1000000; i++)
		if (isPalindrome(i))
			sum += i;

	cout << sum;
	return 0;
}