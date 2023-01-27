/*

What's Hiding Amongst the Crowd?

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string str(string input)
{
    string res = "";
    int len = input.length();
    for(int i=0; i<len; i++)
    {
        if(islower(input[i]))
        {
            res += input[i];
        }
    }
    return res;
}

int main()
{
    string in;
    getline(cin, in);
    cout << str(in);
}
