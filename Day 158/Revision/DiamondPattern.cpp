//Diamond pattern
#include <iostream>
using namespace std;
int main()
{   
    //upper half
    //these are the number of rows
    for (int i = 1; i <= 5; i++)
    {   
        //spaces
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }
        //stars
        //these are the number of stars in each row
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}