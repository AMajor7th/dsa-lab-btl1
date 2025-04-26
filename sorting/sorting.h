#pragma once

#include <vector>
#include "sorting.h"

void selectionSort(std::vector<int>& arr);

void insertionSort(std::vector<int>& arr);

int binarySearch(const std::vector<int>& arr, int item, int low, int high);

void binaryInsertionSort(std::vector<int>& arr);

void bubbleSort(std::vector<int>& arr);

void shakerSort(std::vector<int>& arr);

void shellSort(std::vector<int>& arr);