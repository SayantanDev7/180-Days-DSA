#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int prime(int num){
    //TC is O(sqrt n)
    if(num <= 1)
        return 0;
    /* 
    sqrt num optimization: if a number is not prime then it can be factored into two factors
    a and b such that num = a*b. if both a and b were greater than sqrt(num), 
    then a*b would be greater than num. So at least one of those factors must be less than or equal to sqrt(num).
    */
    for(int i=2;i<=sqrt(num);i++){ 
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(prime(n))
        cout << "The number is prime";
    else
        cout << "The number is not prime";

    return 0;
}