/*

Write a C++ program to replace a given number until it become 1. Go to the editor
If the given number(n) is even replace n with n/2 and if the given number(n) is odd replace n with either n+1 or n-1. Find the minimum number of replacements.
Sample Input: n = 8
Number of replacements: 3

*/

#include <iostream>
using namespace std;

int replaceUntilOne(int input)
{
    int replacement{};
    while(input != 1)
    {
        if(input%2==0)
            input = input/2;
        else
            input = input-1;

        replacement++;
    }
    return replacement;
}

int main()
{
    int n;
    cout << "n: "; cin >> n;
    cout << "Number of replacements: " << replaceUntilOne(n) << endl;
}
