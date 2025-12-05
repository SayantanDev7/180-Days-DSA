// #include<iostream> is a preprocessor directive that tells the compiler to include the standard input-output stream library.
// This library is necessary for using input and output functions like std::cin and std::cout.

//namespace std; is used to avoid prefixing standard library names with std::
// For example, instead of writing std::cout, we can simply write cout if we use namespace std;

//std is a standard namespace in C++ that contains all the standard functions and objects of the C++ Standard Library.

// int main() is the main function where the execution of a C++ program begins.

// cin is used to take input from the user, and cout is used to display output to the user. symbol used << is called the insertion operator and >> is called the extraction operator.

//cout is used with the insertion operator (<<) to send data to the standard output stream (usually the console).

//Variables are used to store data that can be used and manipulated throughout a program. Each variable has a specific data type that determines the kind of data it can hold, such as int for integers, float for floating-point numbers, char for characters, etc.

// Data Types in C++:
// int: Used to store integer values (whole numbers) without decimal points. of size 4 bytes.
// float: Used to store single-precision floating-point numbers (numbers with decimal points). of size 4 bytes.
// double: Used to store double-precision floating-point numbers (numbers with decimal points). of size 8 bytes.
// char: Used to store single characters (letters, digits, symbols). of size 1 byte.
// bool: Used to store boolean values (true or false). of size 1 byte.

//1 byte = 8 bits

//sizeof() is an operator in C++ that returns the size, in bytes, of a data type or a variable.

//Leap Year:
//A year is a leap year if it is divisible by 4 and divisible by 400 but not divisible by 100.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<year<<" is a leap year.";
    }
    else{
        cout<<year<<" is not a leap year.";
    }
    return 0;
}