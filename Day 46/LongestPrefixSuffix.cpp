#include <vector>
using namespace std;
#include <string>
#include <iostream>
int longestPrefixSuffix(const string &s) {

vector<int> lps(s.size(), 0);

int length = 0;   // length of the previous longest prefix-suffix
int suf = 1;      // current index we are computing LPS for

while (suf < s.size()) {

    // Case 1: characters match → extend prefix-suffix
    if (s[suf] == s[length]) {
        length++;                 // increase matched prefix length
        lps[suf] = length;        // store it in LPS array
        suf++;                    // move to next character
    } 
    else {
        // Case 2: mismatch after some matches
        if (length != 0) {
            // fallback to previous longest prefix-suffix
            length = lps[length - 1];
        } 
        else {
            // no prefix-suffix possible
            lps[suf] = 0;
            suf++;                // move forward
        }
    }
}

// returns length of longest prefix which is also suffix
return lps.back();
}
