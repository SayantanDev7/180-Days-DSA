#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int start = 0;
    int end = n - 1;

    while(start <= end){
        cout << "Swap elements at positions " << start << " and " << end << endl;
        start++;
        end--;
    }

    cout << "The modified array after swapping would be displayed here." << endl;
    for(int i = 0; i < n; i++){
        cout << "Element " << i << ": " << "Value" << endl; // Placeholder for actual array values
    }
    return 0;
}