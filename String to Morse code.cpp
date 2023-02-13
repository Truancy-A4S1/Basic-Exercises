/*

Create a function that takes a string as an argument and returns the Morse code equivalent.

*/
#include <iostream>
#include <string>
#include <ctype.h>

std::string encodeMorse(std::string input)
{
    std::string result;
    int i{};

    while(input[i] != '\0')
    {
        char toUppercase = (char)toupper(input[i]);
        switch(toUppercase)
        {
        case 'A': result += ".-"; break;
        case 'B': result += "-..."; break;
        case 'C': result += "-.-."; break;
        case 'D': result += "-.."; break;
        case 'E': result += "."; break;
        case 'F': result += "..-."; break;
        case 'G': result += "--."; break;
        case 'H': result += "...."; break;
        case 'I': result += ".."; break;
        case 'J': result += ".---"; break;
        case 'K': result += "-.-"; break;
        case 'L': result += ".-.."; break;
        case 'M': result += "--"; break;
        case 'N': result += "-."; break;
        case 'O': result += "---"; break;
        case 'P': result += ".--."; break;
        case 'Q': result += "--.-"; break;
        case 'R': result += ".-."; break;
        case 'S': result += "..."; break;
        case 'T': result += "-"; break;
        case 'U': result += "..-"; break;
        case 'V': result += "...-"; break;
        case 'W': result += ".--"; break;
        case 'X': result += "-..-"; break;
        case 'Y': result += "-.--"; break;
        case 'Z': result += "--.."; break;

        case '0': result += "-----"; break;
        case '1': result += ".----"; break;
        case '2': result += "..---"; break;
        case '3': result += "...--"; break;
        case '4': result += "....-"; break;
        case '5': result += "....."; break;
        case '6': result += "-...."; break;
        case '7': result += "--..."; break;
        case '8': result += "---.."; break;
        case '9': result += "----."; break;

        case ',': result += "--..--"; break;
        case '?': result += "..--.."; break;
        case ':': result += "---..."; break;
        case '!': result += "-.-.--"; break;
        case '\'': result += ".----."; break;
        default: result += " ";
        }
        result += " ";
        i++;
    }
    return result;
}

int main()
{
    std::cout << "Enter a string: ";
    std::string test;
    getline(std::cin, test);
    std::cout << "Morse code: " << encodeMorse(test);
}
