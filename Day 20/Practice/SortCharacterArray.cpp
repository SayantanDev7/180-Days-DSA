#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of characters in the array: ";
    cin >> n;

    char arr[n];
    cout << "Enter the characters of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Sorting the character array using Selection Sort
    int index;
    for(int i = 0; i < n - 1; i++){
        index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[index])
                index = j;
        }
        // Swap the found minimum element with the first element
        //Now index is the position of minimum element
        char temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}