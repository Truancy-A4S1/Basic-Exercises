#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "GRADE CALCULATOR\n";
    float g1,g2,g3,g4,g5,g6,g7,g8,total;
    cout << "G1: ";
    cin >> g1;
    cout << "G2: ";
    cin >> g2;

    cout << "G3: ";
    cin >> g3;
    cout << "G4: ";
    cin >> g4;

    cout << "G5: ";
    cin >> g5;
    cout << "G6: ";
    cin >> g6;

    cout << "G7: ";
    cin >> g7;
    cout << "G8: ";
    cin >> g8;
    total = g1+g2+g3+g4+g5+g6+g7+g8;

    //float average = total/8;
    //cout << "YOUR GRADE: " << average;

    float barbaGrade = 2.50;
    cout << "YOUR GRADE: " << barbaGrade;

}
