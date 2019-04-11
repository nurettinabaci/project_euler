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

// By using code of problem 22, I generated scores.txt
// and used it here: 
//def calc(name) :
//	aa = 0
//	for letter in name :
//aa += ord(letter) - ord('A') + 1
//return aa
//
//
//names = open('p042_words.txt').read().replace('"', '').split(',')
//names.sort()
//
//fwrite = open('scores.txt', 'w+')
//for i in range(len(names)) :
//	a = 0
//	a = calc(names[i])
//	fwrite.write(str(a) + " ")
//	print(a)

vector<int> generateTriangles() {
	vector<int> generated;
	for (int i = 0; i < 50; i++)
		generated.push_back(i * (i + 1) / 2);
	return generated;
}

int binarySearch(vector<int> arr, int key) {
	int lo = 0, hi = arr.size() - 1;
	while (lo <= hi)
	{
		int mid = lo + (hi - lo) / 2;
		if (key < arr[mid])
			hi = mid - 1;
		else if (key > arr[mid])
			lo = mid + 1;
		else
			return 1;
	}
	return -1;
}
int main() {

	vector<int> triangles = generateTriangles();

	vector<int> my_nums;
	ifstream file;
	file.open("scores.txt");


	int value;
	while (file >> value)
		my_nums.push_back(value);

	int count = 0;
	int length = my_nums.size();
	for (int i = 0; i < length; i++)
		if (binarySearch(triangles, my_nums[i]) == 1)
			count++;
	cout << count << endl;
	file.close();

	/* Quick solution:
	int result = 0;
	for (int i = 0; i < length; i++) {
		double wordsum = ((sqrt(1 + 8 * my_nums[i])) - 1.0) / 2.0;
		if (wordsum == ((int)wordsum)) {
			result++;
		}
	}
	cout << result;
	*/
}