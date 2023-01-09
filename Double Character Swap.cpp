#include <iostream>
#include <string>
using namespace std;

string str(string in, char c1, char c2)
{
    string res = in;
    int len=in.length();

    for(int i=0; i<len; i++)
    {
        if(in[i] == c1)
        {
            res[i] = c2;
        }
    }
    return res;
}


int main()
{
    string inputStr;
    string outputStr;
    char char1;
    char char2;

    cout << "Enter a string: ";
    getline(cin, inputStr);
    cout << "Character you want to be replaced: ";
    cin >> char1;
    cout << "Character '" << char1 << "' will be replaced with: ";
    cin >> char2;
    cout << endl << "Coutput: " << str(inputStr, char1, char2);
}
