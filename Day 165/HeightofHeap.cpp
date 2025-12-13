#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int heapHeight(int n, int arr[]) {
        // code here
        if(n==1)
            return 1;
        int height = 0;
        while(n > 1){
            height++;
            n=n/2;
        }
        return height;
    }
};
int main(){
    Solution obj;
    int arr[] = {10,20,15,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Height of Heap is: " << obj.heapHeight(n,arr) << endl;
    return 0;
}
//TC - O(log n)