// Create a function that takes a string and returns the word count.

#include<iostream>
#include<string>

using namespace std;

int wordCount(string input)
{
    int count=1, i=0;

    if(input[i]==' ' && input[i+1]== '\0'){ // if the string is empty
        return 0;
    }

    while(input[i]!= '\0')  // loop until the end of the string
    {
        if(input[i] == ' ' && input[i+1] != '\0') // add word count if there is a space and a character after the space
        {
            count++;
        }
    i++;
    }
    
    return count; // return count after looping
}

int main()
{
    cout << "Enter a text: ";
    string text;
    getline(cin, text);
    cout << "\nWord Count: ";
    cout << wordCount(text) << endl;
}
