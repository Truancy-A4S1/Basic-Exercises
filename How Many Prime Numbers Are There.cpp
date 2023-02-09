/*

How many prime numbers are there?

Example:
primeNumbers(10) ➞ 4
// 2, 3, 5 and 7

primeNumbers(20) ➞ 8
// 2, 3, 5, 7, 11, 13, 17 and 19

primeNumbers(30) ➞ 10
// 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29

*/
#include <iostream>
using namespace std;

int primenumbers(int input)
{
    int occurence=1;
    if(input <= 1)
    {
        return 0;
    }
    for(int i=3;i<=input;i++)
    {
        bool isPrime = true;
        for(int j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
        {
            occurence++;
        }
    }
    return occurence;
}

int main()
{
    int input = 30;
    cout << primenumbers(input);
}
