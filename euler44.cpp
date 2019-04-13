#include "pch.h"
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
//std::next_permutation denenebilir

int isPentagonal(int n) {
	double num = ((sqrt(1 + 24 * n)) + 1.0) / 6.0;
	return (num == ((int)num));
}
int main() {
	int result = 0;
	bool check = true;
	int i = 1;

	while (notFound) {
		i++;
		int n = i * (3 * i - 1) / 2;

		for (int j = i - 1; j > 0; j--) {
			int m = j * (3 * j - 1) / 2;
			if (isPentagonal(n - m) && isPentagonal(n + m)) {
				result = n - m;
				check = false;
				break;
			}
		}
	}
	cout << result;
}
