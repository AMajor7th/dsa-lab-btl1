#include <vector>
#include "sorting.h"

int binarySearch(const std::vector<int>& arr, int item, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

void binaryInsertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int pos = binarySearch(arr, key, 0, i - 1);
        int j = i - 1;
        while (j >= pos) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[pos] = key;
    }
}