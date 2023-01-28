/*

    Write a C++ program to find the most occurring element in an array of integers.

*/

#include <iostream>
using namespace std;

int getMode(int input[])
{
    int counter{};
    int highest{};
    int res;

    for(int i=0; i<(sizeof(input)/sizeof(input[0])-1); i++)
    {
        for(int j=i; j<(sizeof(input)/sizeof(input[0]-1)); j++)
        {
            if(input[i] == input[j])
            {
                counter++;
            }
        }

        if(counter > highest)
        {
            res = input[i];
            highest = counter;
            counter = 0;
        }
    }
    return res;
}


int main()
{
    int arr[] = {6,5,3,3,1,5,6,7,8,5,3,6};
    cout << "Array: ";
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]-1)); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Mode: " << getMode(arr);
}
