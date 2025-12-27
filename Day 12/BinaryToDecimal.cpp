#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    string binary = "";
    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n = n / 2;
    }

    cout << "Binary: " << binary << endl;
    return 0;
}