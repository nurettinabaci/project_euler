#include "pch.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

int main()
{
	// create and fill the file
	//ofstream file;
	//file.open("euler40.txt");
	//for (int i = 0; i < 400000; i++) 
	//	file << i;
	//file.close();

	// open the file and read content
	ifstream file;
	file.open("euler40.txt");

	std::string my_num;

	if (file.is_open())
		while (!file.eof())
			file >> my_num;

	int i = 1;
	int answer = 1;
	while (i < 1000001) {
		const char* str = new char(my_num[i]);
		cout << atoi(str);
		answer *= atoi(str);
		cout << i << endl;
		i *= 10;
	}
	cout << answer;
	file.close();
}