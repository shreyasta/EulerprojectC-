// CppEulerProjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
 
	vector<int> multipleList;

	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			multipleList.push_back(i);
		}
	}

	int sumMultiple = 0;

	for (int j = 0; j < multipleList.size(); j++) {
		sumMultiple += multipleList[j];

	}

	cout << "The sum of multiples of 3 and 5 between the numbers 1 and 1000 is: " << sumMultiple;

}


