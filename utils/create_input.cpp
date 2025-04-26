#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include "create_input.h"

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 1. Random vector
std::vector<int> generateRandomVector(int n, int minVal, int maxVal) {
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        vec[i] = minVal + rand() % (maxVal - minVal + 1);
    }
    return vec;
}

// 2. Already sorted vector
std::vector<int> generateSortedVector(int n) {
    std::vector<int> vec = generateRandomVector(n);
    std::sort(vec.begin(), vec.end());
    return vec;
}

// 3. Reverse sorted vector
std::vector<int> generateReverseSortedVector(int n) {
    std::vector<int> vec = generateRandomVector(n);
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    return vec;
}

// 4. Nearly sorted vector
// Idea: craete a sorted array, then swap a few (5%) number of element
std::vector<int> generateNearlySortedVector(int n) {
    std::vector<int> vec = generateSortedVector(n);
    int swaps = n / 20; // 5% elements are disturbed
    for (int i = 0; i < swaps; ++i) {
        int idx1 = rand() % n;
        int idx2 = rand() % n;
        swap(vec[idx1], vec[idx2]);
    }
    return vec;
}
