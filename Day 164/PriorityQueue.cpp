#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; //max heap by default
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);
    cout << "Top element: " << pq.top() << endl; //20
    pq.pop();

    cout << "Size of priority queue: " << pq.size() << endl; //3

    //Printing elements of max heap
    cout << "Elements of max heap: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    //priority queue as min heap
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(15);
    cout << "\nTop element of min heap: " << minHeap.top() << endl; //5
    minHeap.pop();

    //Printing elements of min heap
    cout << "Elements of min heap: ";
    while(!minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

}