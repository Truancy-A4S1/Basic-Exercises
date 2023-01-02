// Create a function that takes a string and returns the word count. The string will be a sentence.

#include<iostream>
#include<string>
using namespace std;

int wordCount(string input)
{
    int count=1, i=0;
    if(input[i] == '\0') // if the string is null
    {
            return 0;
    }

    while(input[i]!= '\0')
    {
        if(input[i] == ' ')
        {
            count++;
        }
    i++;
    }
    return count;
}

int main()
{
    cout << "Enter a text: " << endl;
    string in;
    getline(cin, in);

    cout << "\n\nWord Count: ";
    cout << wordCount(in);
}
