/*
Bubble Sort Algorithm in C++
This program implements the bubble sort algorithm to sort an array of integers in ascending order.

Its basic idea is to repeatedly step through the list, compare adjacent elements and 
swap them if they are in the wrong order.

TC of Bubble Sort is O(n^2) in the average and worst cases because of the nested loops.
SC is O(1) because it only requires a constant amount of additional memory space for variables
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // Bubble Sort Algorithm
    for(int i= 0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}