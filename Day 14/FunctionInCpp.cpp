/*
Functions in C++
Functions in C++ are blocks of code that perform a specific task. They help in organizing code, improving readability, and reusing code. A function typically consists of a function declaration (or prototype), a function definition, and a function call.
The syntax for defining a function in C++ is as follows:
return_type function_name(parameter_list) {
    // function body
}


Pass By Value vs Pass By Reference:

Pass By Value:
When a function is called by value, a copy of the actual parameter's value is passed to the function. 
Changes made to the parameter inside the function do not affect the original argument.

Example:
#include <iostream>
using namespace std;
void modifyValue(int x) {
    x = x + 10; // Modifying the copy of the value
}
int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value after function call: " << num << endl; // Output will be 5
    return 0;
}

Pass By Reference:
When a function is called by reference, the address of the actual parameter is passed to the function.
Changes made to the parameter inside the function affect the original argument.

Example:
#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = x + 10; // Modifying the original value
}
int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value after function call: " << num << endl; // Output will be 15
    return 0;
}

*/