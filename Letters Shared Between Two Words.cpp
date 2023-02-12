/*

Letters Shared Between Two Words

*/
#include <iostream>
#include <string>
using namespace std;

int sharedLetters(string one, string two){
int counter{};
int len_one = one.length();
int len_two = two.length();
char test{};
    for(int i=0; i<len_one; i++)
    {
        test = one[i];
        for(int j=0; j<len_two; j++)
        {
            if(one[i] == two[j])
            {
                counter++;

                for(int k=i; k<len_one; k++)
                {
                    if(one[k] == test)
                    {
                        one[k] = NULL;
                    }
                }

                break;
            }
        }
    }
    return counter;
}


int main(){
    string one, two;
    cout << "Enter string 1: "; getline(cin, one);
    cout << "Enter string 2: "; getline(cin, two);
    cout << "Shared letters: " << sharedLetters(one, two) << endl;
}
