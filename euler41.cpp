#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
 // first find all primes under ten billion
 // then check pandigitality in descending order 
using namespace std;

bool isPandigital(unsigned long n) {
	int digits = 0;
	int count = 0;
	int tmp;

	while (n > 0) {
		tmp = digits;
		digits = digits | 1 << (int)((n % 10) - 1); //The minus one is there to make 1 fill the first bit and so on
		if (tmp == digits) { //Check to see if the same digit is found multiple times
			return false;
		}
		count++;
		n /= 10;
	}

	return digits == (1 << count) - 1;
}


std::vector<bool> SieveOfEratosthenes(unsigned long less)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	vector<bool> prime(less + 1);
	std::fill(begin(prime), end(prime), true);

	for (unsigned long p = 2; p * p <= less; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (unsigned long i = p * 2; i <= less; i += p)
				prime[i] = false;
		}
	}
	return prime;

	// Print all prime numbers
	// for (unsigned long p = 2; p <= less; p++)
	//	if (prime[p] == true)
	//		cout << p << " ";
}

int main() {
	int maxPandigitalNumber = 987654321;
	int result = 0;
	vector<bool> primes = SieveOfEratosthenes(maxPandigitalNumber);
	int lenghtt = primes.size();

	for (int i = lenghtt - 1; i >= 0; i--)
		if (primes[i])
			if (isPandigital(i)) {
				result = i;
				cout << result;
				break;
			}
}