#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num == 0 || num == 1)
        return 1;
    return num * fact(num-1);
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The factorial of the given number is: "<< endl;
    cout << fact(n);

    return 0;
}