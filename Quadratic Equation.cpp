#include <iostream>
#include <cmath>
#include <dos.h>
#include <ctime>
#include <windows.h>

// Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. The function will take three arguments:


using namespace std;

void getRoot(int a, int b, int c)
{
    double x1, x2;
    int dp2 = -4*a*c;
    int d = ( ( pow(b, 2) ) + dp2 );
    int qf1 = -1*b;
    int b1 = b*b;
    int b2 = (4*a)*c;
    int qf2 = sqrt(b1 - b2);
    int qf3 = 2*a;

    if(d > 0)
    {
        x1 = (qf1 + qf2) / qf3;
        x2 = (qf1 - qf2) / qf3;
        cout << "Answer: " << "x: " << x1 << endl;
        cout << "Answer: " << "x: " << x2 << endl;
        return;
    }else if(d == 0)
    {
        x1 = (qf1 + qf2) / qf3;
        cout << "Answer: " << "x: " << x1 << endl;
        return;
    }else
    {
        cout << "Answer: " << "No Solution!" << endl;
        return;
    }
}

int main()
{
    int a=0, b=0, c=0;

    cout << "Input a: ";
    cin >> a;
    system("CLS");
    cout << "Equation: " << a << "x^2 ";
    cout << endl;
    cout << "Input b: ";
    cin >> b;
    system("CLS");
    if(b > 0)
    {
        cout << "Equation: " << a << "x^2 " << "+ " << b << "x";
    }
    if(b < 0)
    {
        cout << "Equation: " << a << "x^2 " << b << "x";
    }
    cout << endl;
    cout << "Input c: ";
    cin >> c;
    system("CLS");
    if((c > 0) && (b > 0))
    {
        cout << "Equation: " << a << "x^2 " << "+ " << b  << "x +" << c << " = 0";
    }
    if((c < 0) && (b < 0))
    {
        cout << "Equation: " << a << "x^2 " << b << "x " << c << " = 0";
    }
    cout << endl;

    getRoot(a, b, c);
}
