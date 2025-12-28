/*
TC is O(N+log M)    where N is number of rows and M is number of columns in the 2D array
SC is O(1) as we are not using any extra space
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n,vector<int>(m));
    cout << "Enter the elements of the matrix row-wise:" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    // Step 1: Find the potential row where the target may be present
    int row = -1;
    for(int i=0;i<n;i++){
        if(mat[i][0] <= target && mat[i][m-1] >= target){
            int start = 0,end = m-1;
            row = i;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(mat[i][mid] == target){
                    cout << "Element found at position: (" << i << ", " << mid << ")" << endl;
                    return 0;
                }else if(mat[i][mid] < target){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }

            return 0; // Element not found in the identified row
    }
}