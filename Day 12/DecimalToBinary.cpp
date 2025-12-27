#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary[32]; // Array to store binary digits
    int index = 0;

    // Convert decimal to binary
    while(n > 0){
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    cout << "Binary representation: ";
    // Print binary digits in reverse order
    for(int i = index - 1; i >= 0; i--){
        cout << binary[i];
    }
    cout << endl;

    return 0;
}