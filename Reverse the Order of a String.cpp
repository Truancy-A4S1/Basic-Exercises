#include <iostream>
#include <string>
using namespace std;

string strReverse(string in)
{
    string out = in;

    int maxIndex = in.length()-1;
    for(int i=0; i<in.length(); i++)
    {

        out[i] = in[maxIndex];
        maxIndex--;
    }
    return out;
}

int main()
{
    string orig = "";
    cout << "INPUT A STRING : ";
    getline(cin, orig);
    cout << "REVERSE STRING : " << strReverse(orig);
    cout << endl;
    return 0;
}
