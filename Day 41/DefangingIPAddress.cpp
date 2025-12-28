/*
Leet 1108 : Defanging an IP Address
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        for(char c : address){
            if(c == '.'){
                defanged += "[.]";
            }else{
                defanged += c;
            }
        }
        return defanged;
    }
};