#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    int num = 1;
    for(int i=1;i<=exponent;i++){
        num = num * base;
    }

    cout << "Result: " << num << endl;
    return 0;
}