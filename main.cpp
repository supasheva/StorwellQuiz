#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

// Consider that you have a rectangular
// piece of paper of arbitrary dimensions N by M
// (where N and M are positive integers).
// You also have a pair of scissors which can cut perfectly straight
//  with no loss of paper. You wish to reduce the original piece of paper into a series of perfect squares of paper,
//  making the largest possible squares, and using all of the paper provided.
// Write a function in C that takes the inputs N, and M,
// and returns the series of squares that can be made out of that piece of paper. No fractional squares, i.e.
// no square should be less than 1 in length and width.

// The program
void perfectSquares(int N, int M)
{
    if (N == 0 && M == 0)
    {
        return; // Base case: Both dimensions are zero, stop recursion
    }

    if (N == 0 || M == 0)
    {
        cout << M << "x" << M << ", ";
        perfectSquares(N, M - M);
    }
    else if (M == 0)
    {
        cout << N << "x" << N << ", ";
        perfectSquares(N - N, M);
    }
    else if (N >= M)
    {
        cout << M << "x" << M << ", ";
        perfectSquares(N - M, M);
    }
    else
    {
        cout << N << "x" << N << ", ";
        perfectSquares(N, M - N);
    }
}

int main()
{

    perfectSquares(6, 5);
    cout << "\n";
    perfectSquares(22, 5);
    cout << "\n";
    perfectSquares(34, 6);
    return 0;
}