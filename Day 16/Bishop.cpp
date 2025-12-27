/*
We have to count the total no of cells a bishop can attack from a given position on an 8x8 chessboard
until it hit the diagonals of the chessboard.

*/
#include <iostream>
using namespace std;

int main(){
    int totalmoves = 0;
    int row, col;
    cout << "Enter the position of bishop (row and column): ";
    cin >> row >> col;
    // Top-Right Diagonal
    totalmoves += min(8 - row, 8 - col);
    // Top-Left Diagonal
    totalmoves += min(8 - row, col - 1);
    // Bottom-Right Diagonal
    totalmoves += min(row - 1, 8 - col);
    // Bottom-Left Diagonal
    totalmoves += min(row - 1, col - 1);

    cout << "Total moves the bishop can make: " << totalmoves << endl;
    return 0;
}