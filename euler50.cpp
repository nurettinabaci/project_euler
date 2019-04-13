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
	vector<int> my_prime;
	int n = prime.size();
	for (int i = 2; i < n; i++) {
		if (prime[i])
			my_prime.push_back(i);
	}
	return my_prime;

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

int main()
{
	vector<int> log;
	vector<int> primes = SieveOfEratosthenes(1000000);
	cout << primes.size() << endl;
	int n = primes.size();
	long long sum = 0, max = 0;
	int run = 0;

	for (int i = 3; i < n; i++) // indicates start
		for (int j = i; j < n; j++) // indicates end
		{
			sum += primes[j];
			if (sum >= 1000000) break;
			if (sum > 850000 && sum < 1000000)
				log.push_back(sum);
			//here give 961, we decrease 10 and answer is 951 
			//according to 
			// https://euler.stephan-brumme.com/50/

			/*if (isPrime(sum) && (j - i > run) && (sum > max)) {
				max = sum;
				run = j - i;
				// gives wrong answer
			}*/


		}
	//cout << "Result is "<<max <<endl<< "Maxrun is "<< run<<endl;
	for (int i = 0; i < log.size(); i++)
	{
		cout << log[i] << endl;
	} // result is (last_element - 10)

}


