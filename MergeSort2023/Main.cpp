#include <string>
#include <chrono>
#include <random>
#include <iostream>
#include "MergeSort.h"

int main()
{
    std::cout << "Hello World!\n";
    vector<int> test_set;
    for (unsigned int i = 0; i < 3000; i++)
    {
        test_set.push_back(rand() % 10000);
    }

    CMergeSort merge;
    merge.merge_sort(test_set);
    return 0;
}
