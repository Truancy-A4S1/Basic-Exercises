// Create a function that returns the string "Burp" with the amount of "r's" determined by the input parameters of the function.

#include <string.h>
#include <iostream>
using namespace std;

string burrpp(int n)
{
    int r = n;
    string burp = "Bu";

    if(n > 0)
    {
        for(int i=0; i<r; i++)
        {
            burp = burp + "r";
        }

    }
    burp = burp + "p";
    
    return burp;
}

int main()
{
    cout << "Enter the amount of \"r's\" you want in \"Burp\": ";
    int ntimes;
    cin >> ntimes;

    cout << endl << "Output: " << burrpp(ntimes);
}

