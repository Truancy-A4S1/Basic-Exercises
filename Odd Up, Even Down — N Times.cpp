#include <iostream>
using namespace std;

void evenOddTransform(int arr[], int times)
{
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<=times; i++)
    {

        for(int j=0;j<=len;j++)
        {

            if(arr[j]%2 == 0)
            {
                arr[j] += -2;

            }else{
                arr[j] += 2;
            }
        }
    }
}

int main()
{
    cout << "Adds two (+2) to each odd integer.\nSubtracts two (-2) from each even integer." << endl << endl;

    cout << "Enter Size of Array: ";
    int siize;
    cin >> siize;

    int arraay[siize];
    cout << "Enter elements for ARR[" << siize << "]: ";

    for(int i=0;i<siize;i++)
    {
        cin >> arraay[i];
    }

    cout << endl << "Enter how many times you want to transform the elements: ";
    int nth;
    cin >> nth;




    evenOddTransform(arraay, nth);

    cout << endl << "Transformed Array: ";
    for(int i=0; i<siize; i++)
    {
        cout << arraay[i] << " ";
    }
    cout << endl;
}
