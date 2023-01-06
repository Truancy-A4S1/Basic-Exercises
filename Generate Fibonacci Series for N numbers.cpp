#include<iostream>
using namespace std;

void printFibonacci(int n)
{
    int f1 = 0;
    int f2 = 1;
    int fn = f1 + f2;

    cout << "0";
    for(int i=0; i<n-1; i++)
    {
        cout << " " << fn;
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

}

int main()
{
    int n;

    cout << "How many terms you want to display: ";
    cin >> n;
    cout << "Fibnacci Sequence if n is " << n << ": ";
    printFibonacci(n);
    cout << endl;
}
