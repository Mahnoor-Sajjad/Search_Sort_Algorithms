#include<iostream>
#include "Sorting.h"
#include "Searching.h"
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   
    cout << endl;  

    cout<<"Now sorting the array using Quick Sort: "<<endl;
    SortingAlgorithm sorter;
    sorter.QuickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   
    cout << endl;
    int key;
    int result;
    SearchAlgorithm searcher;
    cout << "Enter a number to find in the given array: ";
    cin >> key;
   
    result = searcher.BinarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}