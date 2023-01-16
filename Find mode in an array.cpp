/*

    Write a C++ program to find the most occurring element in an array of integers.

*/

#include <iostream>
using namespace std;

int getMode(int input[])
{
    int currCount=0;
    int prevCount=0;
    int result;

    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            if(input[i] == input[j])
            {
                currCount++;
            }
        }
        if(currCount > prevCount)
        {
            result = input[i];
        }
        prevCount = currCount;
        currCount = 0;
    }
    return result;
}


int main()
{
    int arr[10];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << "Enter Element " << i+1 << "/10: ";
        cin >> arr[i];
    }
    cout << "\nMode:" << getMode(arr) << endl;
}
