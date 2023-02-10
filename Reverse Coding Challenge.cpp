#include <iostream>
#include <string>

using namespace std;

string print(string input){
    string result;
    int len = input.length();
    for(int i=1;i<len;i=i+2)
    {
        char c = input[i];
        int newI = atoi(&c);

        for(int j=0;j<newI;j++)
        {
            result += input[i-1];
        }
    }
    return result;
}

int main()
{
    cout <<"'A4B5C2' -> 'AAAABBBBBCC'\n" << "'C2F1E5' -> 'CCFEEEEE'\n" <<"'T4S2V2' -> 'TTTTSSVV'\n" << "'A1B2C3D4' -> 'ABBCCCDDD";
    cout << endl << "Enter A String With the same pattern: ";
    string krkds; cin >> krkds;
    cout << krkds << " -> " << print(krkds) << endl;
}
