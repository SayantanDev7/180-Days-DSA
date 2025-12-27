/*
Insertion Sort Algorithm in C++
This program implements the insertion sort algorithm to sort an array of integers in ascending order.

The Basic idea of Insertion Sort is to build a sorted array one element at a time by repeatedly taking the next element
from the input data and inserting it into the correct position within the already sorted part of the array.

Example from deck of playing cards:
We start with an empty left hand and the cards face down on the table.
We then pick up the cards one at a time with our right hand. As we pick up each card, we insert it into the correct position 
in our left hand,
so that the cards in our left hand are always sorted.

TC of Insertion Sort is O(n^2) in the average and worst cases because of the nested loops.
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

    // Insertion Sort Algorithm
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}