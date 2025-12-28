/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

/*
Approach:
Roman numerals are typically written from largest to smallest, 
but there are specific cases where a smaller numeral precedes a larger one to indicate subtraction.

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter the Roman numeral: ";
    cin >> s;
    
    int sum=0,index = 0;
    while(index < s.length()){
        if(s[index] == 'I'){
            if(index + 1 < s.length() && s[index + 1] == 'V'){
                sum += 4;
                index += 2;
            }else if(index + 1 < s.length() && s[index + 1] == 'X'){
                sum += 9;
                index += 2;
            }else{
                sum += 1;
                index++;
            }
        }else if(s[index] == 'X'){
            if(index + 1 < s.length() && s[index + 1] == 'L'){
                sum += 40;
                index += 2;
            }else if(index + 1 < s.length() && s[index + 1] == 'C'){
                sum += 90;
                index += 2;
            }else{
                sum += 10;
                index++;
            }
        }else if(s[index] == 'C'){
            if(index + 1 < s.length() && s[index + 1] == 'D'){
                sum += 400;
                index += 2;
            }else if(index + 1 < s.length() && s[index + 1] == 'M'){
                sum += 900;
                index += 2;
            }else{
                sum += 100;
                index++;
            }
        }else{
            switch(s[index]){
                case 'V':
                    sum += 5;
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
            }
            index++;
        }
    }
}