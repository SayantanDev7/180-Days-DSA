//Heap Sort: Build Max Heap from given array
//TC is O(n) for building max heap + O(nlogn) for sorting = O(nlogn)
//SC is O(1) as we are not using any extra space though the recursive calls
#include<iostream>
using namespace std;

void Heapify(int arr[],int ind,int n){
    int largest = ind;
    int left = 2*ind + 1;
    int right = 2*ind+2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != ind){
        swap(arr[largest],arr[ind]);
        Heapify(arr,largest,n);
    }

}
void BuildMaxHeap(int arr[],int size){
    for(int i=size/2 - 1;i>=0;i--){ //Heapify should be called from last non-leaf node to root node
        Heapify(arr,i,size);
    }

}
void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Heapsort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        //At first swap the first and last ele
        swap(arr[i],arr[0]);
        //Now Heapify i elements
        Heapify(arr,0,i);
    }
}
int main(){
    int arr[] = {10,30,3,7,25,0,12,8};
    int index = 0;
    BuildMaxHeap(arr,8);
    cout << "Before Sorting: " << endl;
    printHeap(arr,8);

    Heapsort(arr,8);
    cout << "After Sorting: "<< endl;
    printHeap(arr,8);

}