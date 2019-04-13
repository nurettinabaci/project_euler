#include "pch.h"
#include <string>
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <cmath>
using namespace std;
//std::next_permutation denenebilir

using namespace std;
bool isPentagonal(long num) {
	double n = (1 + sqrt(24 * num + 1)) / 6;
	return n == (long)n;
}
int main()
{
	long H = 0;
	long i = 144;
	while (true) {
		H = i * ((i << 1) - 1);
		if (isPentagonal(H))
			break;
		i++;
	}
	std::string out_string;
	std::stringstream ss;
	ss << H;
	out_string = ss.str();
	cout << H;
}