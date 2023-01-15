/*

Write a C++ program to count number of duplicate characters in a given string. Go to the editor
Example:
Original String:
Total number of unique characters of the said two strings.
Number of duplicate characters in the said string: 36

*/
#include <iostream>
#include <string>
using namespace std;

string removeChar(string n, char thisOne)
{
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]== thisOne)
        {
            n[i] = ' ';
        }
    }
    return n;
}

int main()
{
    string str;
    cout << "Enter original string: ";
    getline(cin, str);
    int len = str.length();
    int countDup = 0;

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(str[i] == str[j] && str[i]!=' ')
            {
                countDup++;
                str = removeChar(str, str[i]);
                break;

            }
        }
    }
    cout << "\nDuplicate characters in a string: " << countDup << endl;

}
