/*
String Rotated by 2 Places
Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, 
otherwise, false.

Note: Both rotations should be performed in same direction chosen initially.

Examples:

Input: s1 = "amazon", s2 = "azonam"
Output: true
Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".
*/
#include <bits/stdc++.h>
using namespace std;

 //Clockwise rotation by 2 places
 void rotateClockwise(string &s){
    int n = s.length();
    char first = s[n-2];
    char second = s[n-1];
    for(int i=n-1;i>=2;i--){
        s[i] = s[i-2];
    }
    s[0] = first;
    s[1] = second;
 }

 void rotateAntiClockwise(string &s){
    int n = s.length();
    char first = s[0];
    char second = s[1];
    for(int i=0;i<n-2;i++){
        s[i] = s[i+2];
    }
    s[n-2] = first;
    s[n-1] = second;
 }
int main(){
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    rotateClockwise(s1);
    if(s1 == s2){
        cout << "true" << endl;
        return 0;
    }
    if(s1.length() != s2.length()){
        cout << "false" << endl;
        return 0;
    }


    return 0;
}