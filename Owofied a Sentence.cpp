/*

Owofied a Sentence

Create a function that takes a sentence and turns every "i" into "wi" and "e" into "we", and add "owo" at the end.

*/
#include <iostream>
#include <string>

using namespace std;

string owofier(string input)
{
    string result;
    int lim = input.length() - 1;
    int i=0;

    while(i <= lim)
    {
        if(input[i]=='i')
        {
            result += "wi";
        }
        else if(input[i]=='e')
        {
            result += "we";
        }
        else
        {
            result += input[i];
        }
    i++;
    }
    result += " owo";
    return result;
}

int main()
{
    string rers = "I'm gonna ride 'til I can't no more";
    cout << owofier(rers);
}
