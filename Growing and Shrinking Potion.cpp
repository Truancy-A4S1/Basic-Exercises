
/// SAVE FIRST BEFORE TYPING CODE

#include <iostream>
#include <string>

std::string afterPotion(std::string input)
{
    std::string result;

    for(int i=0; i<input.length(); i++)
    {
        if(input[i] == 'A'){
            if(input[i-1] == '9')
            {
                //https://www.geeksforgeeks.org/how-to-append-a-character-to-a-string-in-c/
            }

            input[i-1] += 1;

        }else if(input[i] == 'B'){
            input[i-1] -= 1;

        }
    }
    for(int i=0; i<input.length(); i++)
    {
        if(input[i] == 'A'){}
        else if(input[i] == 'B'){}
        else{
            result += input[i];
        }

    }

    return result;
}


int main()
{
    std::cout << "Example: 3A78B51 -> " << afterPotion("3A78B51") << std::endl;
    std::cout << "Enter a String: ";
    std::string test = ""; std::cin >> test;
    std::cout << test << " -> " << afterPotion(test);
}
