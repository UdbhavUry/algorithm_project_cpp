#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace chrono;

// Function declarations
void mergeSort(vector<int>& arr, int left, int right);
int binarySearch(vector<int>& arr, int target);
int knapsack(vector<int>& weights, vector<int>& values, int capacity);

// Test Sorting
void testSorting() {
    vector<int> sizes = {100, 1000, 5000};

    for (int size : sizes) {
        vector<int> arr(size);

        for (int i = 0; i < size; i++)
            arr[i] = rand() % 10000;

        auto start = high_resolution_clock::now();
        mergeSort(arr, 0, arr.size() - 1);
        auto end = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(end - start);

        cout << "Merge Sort | Size: " << size
             << " | Time: " << duration.count() << " microseconds\n";
    }
}

// Test Searching
void testSearching() {
    vector<int> arr(100000);
    for (int i = 0; i < 100000; i++)
        arr[i] = i;

    int target = 99999;

    auto start = high_resolution_clock::now();
    binarySearch(arr, target);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Binary Search Time: "
         << duration.count() << " microseconds\n";
}

// Test Knapsack
void testKnapsack() {
    vector<int> weights = {1, 3, 4, 5};
    vector<int> values = {1, 4, 5, 7};
    int capacity = 7;

    auto start = high_resolution_clock::now();
    int result = knapsack(weights, values, capacity);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Knapsack Result: " << result << endl;
    cout << "Knapsack Time: "
         << duration.count() << " microseconds\n";
}

int main() {
    testSorting();
    testSearching();
    testKnapsack();
    return 0;
}