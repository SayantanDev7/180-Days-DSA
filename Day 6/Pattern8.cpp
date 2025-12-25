/*
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j>=1;j--){
            cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}