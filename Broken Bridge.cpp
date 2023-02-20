// Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

bool isBridgeSafe(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if( s[i] == ' ' ) // If bridge have a space / broken
        {
            return false;
        }
    }
    return true;
}


int main()
{
    cout << "Enter a bridge: ";
    string s;
    getline(cin, s);

    if(isBridgeSafe(s))
    {
        cout << endl << "The bridge is safe" << endl;
    }
    else
    {
        cout << endl << "The bridge is NOT safe" << endl;
    }

}
