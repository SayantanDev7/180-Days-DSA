/*
Selection Sort Algorithm in C++
This program implements the selection sort algorithm to sort an array of integers in ascending order.

Its basic idea is to divide the array into two parts: a sorted part and an unsorted part.
The algorithm repeatedly selects the smallest (or largest, depending on the order) element from the unsorted part 
and swaps it with the first unsorted element, effectively growing the sorted part by one element each time.



TC of Selection Sort is O(n^2) in all cases (best, average, worst) because it always involves two nested loops iterating over 
the array elements.
SC is O(1) because it only requires a constant amount of additional memory space for variables
*/



#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int index;
    for(int i=0;i<n;i++){
        index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[index])
                index = j;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}