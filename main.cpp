#include <iostream>
#include <chrono>
#include <iomanip>
#include <vector>
#include "sorting\sorting.h"
#include "utils\create_input.h"
#include "utils\benchmark.h"

using namespace std;

int main() {
    // Sorting algorithm to experiment:
    // 1. Selection sort
    // 2. Insertion sort
    // 3. Binary insertion sort
    // 4. Bubble sort
    // 5. Shaker sort
    // 6. Shell sort


    int a = 10000;
    vector<int> elementNumber = {a, 2*a, 4*a, 6*a, 8*a, 10*a, 12*a, 14*a, 16*a, 20*a};

    benchmarkSort("SELECTION SORT", selectionSort, elementNumber);
    benchmarkSort("INSERTION SORT", insertionSort, elementNumber);
    benchmarkSort("BINARY INSERTION SORT", binaryInsertionSort, elementNumber);
    benchmarkSort("BUBBLE SORT", bubbleSort, elementNumber);
    benchmarkSort("SHAKER SORT", shakerSort, elementNumber);
    benchmarkSort("SHELL SORT", shellSort, elementNumber);

}