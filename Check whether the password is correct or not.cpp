#include <iostream>
using namespace std;

bool isPinCorrect(int attempt)
{
    if(attempt != 1234)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    cout << "Enter your password: ";
    int pass;
    cin >> pass;

    if(isPinCorrect(pass) == false)
    {
        cout << "Password Incorrect!" << endl;
        return 0;
    }
    cout << "Password is Correct!" << endl;
}
