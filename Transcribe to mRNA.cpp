#include<iostream>
using namespace std;



string dnaToRna(string dna)
{
    string rna;
    int i=0;
    while(dna[i] != '\0')
    {
        switch(dna[i])
        {
        case 'A':
        rna=rna+'U';
        break;

        case 'C':
        rna=rna+'G';
        break;

        case 'G':
        rna=rna+'C';
        break;

        case 'T':
        rna=rna+'A';
        break;
        }
        i++;
    }
    return rna;
}

int main()
{
    cout << "DNA Strand:\t";
    string a;
    cin>> a;

    cout << "           \t";
    for(int i=a.length(); i>0; i--)
    {
        cout << "|";
    }
    cout << endl <<"RNA Pair:\t" << dnaToRna(a);
}
