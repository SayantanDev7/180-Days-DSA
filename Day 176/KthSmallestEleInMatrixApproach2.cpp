/*
This Apporach is using Binary Search to find the Kth Smallest Element in a Sorted Matrix.
The idea is to use binary search on the range of the elements in the matrix. We find the mid value
and count how many elements are less than or equal to mid. Based on the count, we adjust our search range.
*/

/*
TC is O(nlog(max-min)) where n is number of rows and max and min are the maximum and minimum elements in the matrix.
SC is O(1) as we are not using any extra space.
*/
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>> &mat, int k) {
    int n = mat.size();
    int left = mat[0][0];
    int right = mat[n-1][n-1];
    
    while(left <= right){
        int count = 0;
    int mid = left + (right - left)/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] < mid)
                count++;
        }
    }
        if(count <= k){
            left = mid + 1;
        }
        else  {
            right = mid - 1;
        }
    }

    return left;
}
int main(){
    vector<vector<int>> mat = {
        {1, 5, 9},
        {15, 11, 13},
        {12, 13, 15}
    };
    int k = 4;
    cout << "The " << k << "th smallest element is: " << kthSmallest(mat, k) << endl;
    return 0;
}