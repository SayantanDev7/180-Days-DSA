//Sort According to ASCII Value of Vowels in a String
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    vector<char> vowels;
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vowels.push_back(c);
        }
    }

    sort(vowels.begin(), vowels.end());

    int index = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s[i] = vowels[index++];
        }
    }

    cout << "String after sorting vowels: " << s << endl;

    return 0;
}