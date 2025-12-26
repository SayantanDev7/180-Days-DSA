/*
Do while Loop in C++
The do-while loop in C++ is used to repeatedly execute a block of code at least once, and then continue executing it as long as a specified condition is true.
The syntax for a do-while loop is as follows:
do {
    // code to be executed
} while (condition);

Here , the code inside the do block is executed first, and then the condition is evaluated. 
If the condition is true, the loop continues to execute the code block.
*/

//Example of do-while loop in C++
#include <iostream>
using namespace std;
int main() {
    int count = 1; // Initialize a counter variable

    // Do-while loop to print numbers from 1 to 5
    do {
        cout << "Count: " << count << endl; // Print the current value of count
        count++; // Increment the counter variable
    } while (count <= 5); // Condition to continue the loop

    return 0;
}