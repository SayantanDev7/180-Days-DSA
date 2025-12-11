// previously i built max heap by inserting elements one by one i.e step up method which tc is O(nlogn)
// now i will build max heap by heapify method which is step down method which tc is O(n)
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
int main(){
    int arr[] = {10,30,3,7,25,0,12,8};
    int index = 0;
    BuildMaxHeap(arr,8);
    printHeap(arr,8);

}