#include "pch.h"
#include <string>
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

std::vector<int> SieveOfEratosthenes(unsigned long less)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	vector<int> prime(less + 1);
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

bool isSquared(int num) {
	double number = sqrt((double)num / 2);
	return (number == (int)number);
}


int main()
{
	
	vector<int>primes = SieveOfEratosthenes(10000);
	int odd = 1;
	bool check = true;
	int result = odd;

	while (check) {
		odd += 2;
		for (int i = 0; i < primes.size(); i++) {
			if ((odd > i) && primes[i]) {
				if (isSquared(odd - i)) {
					result = odd;
					check = false;
					break;
				}
				//  continue
			}
		}
	}
	cout << result;

}


