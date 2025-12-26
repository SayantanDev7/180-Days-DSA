/*
WHILE LOOP IN C++

The while loop in C++ is used to repeatedly execute a block of code as long as a specified condition is true. 
The syntax for a while loop is as follows:
while (condition) {
    // code to be executed
}
Here, the condition is evaluated before each iteration of the loop. If the condition is true, the code inside the loop is executed. 
If the condition is false, the loop terminates, and the program continues with the next statement after the loop.


*/

//Exa,mple of while loop in C++
#include <iostream>
using namespace std;

int main() {
    int count = 1; // Initialize a counter variable

    // While loop to print numbers from 1 to 5
    while (count <= 5) {
        cout << "Count: " << count << endl; // Print the current value of count
        count++; // Increment the counter variable
    }

    return 0;
}