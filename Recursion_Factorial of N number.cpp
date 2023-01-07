#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1) //return n to solve for n=1, then n=2,... n=k.
    {
        return n;
    }
    else
    {
        return n * fact(n-1); //solve first the fact(n-1), then fact(n-2) until n=1 (base case)
    }
}
int main()
{
    long int n;
    cout << "Enter n to get n! : ";
    cin >> n;
    cout << n << "! = "  << fact(n) << endl;
}
