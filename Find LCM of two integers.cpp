/*

Write a function that returns the least common multiple (LCM) of two integers.

Note: The LCM is the smallest integer that is divisible by both numbers such that the remainder is zero.


*/

#include <iostream>
using namespace std;

//Solution 1: by adding num1 to testNum1 or adding num2 to testNum2 until testNum1 and testNum2 is equal
int getLcm(int num1, int num2)
{
    int testNum1=num1, testNum2=num2;
    int result = num1 * num2;

    do
    {
        if(testNum1 == testNum2)
        {
            return testNum1;
        }

        if(testNum2 > testNum1)
        {
            testNum1 += num1;

        }else if(testNum2 < testNum1)
        {
            testNum2 += num2;
        }

    }while(testNum1 < result);

    return result;
}

//solution 2: by testing if both num1 and num2 is divisible by i
int getLcm2(int num1, int num2)
{
    for(int i=num1; ; i++)
    {
        if(i%num1 == 0 && i%num2 == 0)
        {
            return i;
        }
    }
}


//solution 3: same logic sa solution 2 pero code ni sir petz
int getLcm3(int num1, int num2)
{
    int i=num1;
    while(!(i%num1 == 0 && i%num2 == 0))
        i++;
    return i;
}

int main()
{
    cout << "Enter num1: ";
    int n1;
    cin >> n1;
    cout << "Enter num2: ";
    int n2;
    cin >> n2;

    cout << "\nFunction1: " << getLcm(n1, n2) << endl;
    cout << "Function2: " << getLcm2(n1, n2) << endl;
    cout << "Function3: " << getLcm3(n1, n2) << endl;
}
