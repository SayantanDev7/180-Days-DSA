#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int count[256] = {0};
    int first = 0, second = 0;
    int maxLen = 0;

    while (second < s.size()) {
        while (count[s[second]]) {
            count[s[first]] = 0;
            first++;
        }

        count[s[second]]++;
        maxLen = max(maxLen, second - first + 1);
        second++;
    }

    cout << "Longest substring length: " << maxLen << endl;
    return 0;
}
