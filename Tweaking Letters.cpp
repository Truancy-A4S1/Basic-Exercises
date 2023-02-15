#include <string>
#include <iostream>

using namespace std;

string tweakLetters(string str, int arr[]){
    string result = str;
    for(int i=0; i<str.length(); i++){
        result[i] += arr[i];
    }
    return result;
}

int main(){
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    cout << "Enter the array: ";
    int arr[(input.length()-1)];
    for(int i=0;i<input.length(); i++)
    {
        cin >> arr[i];
    }
    cout << tweakLetters(input, arr);
}
/*
Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.
*/
