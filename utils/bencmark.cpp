#include <iostream>
#include <chrono>
#include <iomanip>
#include <vector>
#include <string>
#include "create_input.h"
#include "benchmark.h"

using namespace std;

void benchmarkSort(
    const string& sortName,
    void (*sortFunc)(vector<int>&),
    const vector<int>& elementNumber
) {
    cout << "\n" << sortName << "\n";
    cout << left;
    cout << setw(10) << "n = "  
        << setw(20) << "Random"
        << setw(20) << "Sorted"
        << setw(20) << "Reversed"
        << setw(20) << "Nearly Sorted" << endl;

    for (int n : elementNumber) {
        vector<int> random = generateRandomVector(n);
        vector<int> sorted = generateSortedVector(n);
        vector<int> reversed = generateReverseSortedVector(n);
        vector<int> nearly = generateNearlySortedVector(n);

        auto timeSort = [&](vector<int> vec) {
            auto start = chrono::high_resolution_clock::now();
            sortFunc(vec);
            auto end = chrono::high_resolution_clock::now();
            return chrono::duration_cast<chrono::milliseconds>(end - start).count();
        };

        cout << left;
        cout << setw(10) << n 
            << setw(20) << timeSort(random)
             << setw(20) << timeSort(sorted)
             << setw(20) << timeSort(reversed)
             << setw(20) << timeSort(nearly) << endl;
    }
}