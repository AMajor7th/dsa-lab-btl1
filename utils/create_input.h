#pragma once

#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>

void swap(int &a, int &b);

std::vector<int> generateRandomVector(int n, int minVal = 0, int maxVal = 10000);

std::vector<int> generateSortedVector(int n);

std::vector<int> generateReverseSortedVector(int n);

std::vector<int> generateNearlySortedVector(int n);
