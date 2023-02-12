#pragma once

#include <algorithm>
#include <vector>

using namespace std;

class CMergeSort
{
private:
	int MinFromTwoValues(int a, int b);
public:
	CMergeSort()
	{

	};
	void merge_sort(vector<int> &input_vector);

};

