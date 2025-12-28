/*
Step 1 - Transpose the matrix: Convert rows to columns and columns to rows.
Step 2 - Reverse columns: After transposing, reverse the elements of each column to get the final rotated matrix.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int arr[n][n];
    cout << "Enter the elements of the matrix row-wise:" << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    // Step 1: Transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Step 2: Reverse each column
    for(int j=0;j<n;j++){
        int start = 0;
        int end = n - 1;
        while(start < end){
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }

    cout << "Rotated Matrix by 90 degrees anti-clockwise:" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

