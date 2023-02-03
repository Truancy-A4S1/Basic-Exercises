#include <iostream>
using namespace std;

int getTetrahedral(int n)
{
    int res{};

    for(int i=1;i<=n;i++)
    {
        res += (i*(i+1))/2;
    }
    return res;
}

int main()
{
    cout << "Enter the nth layer of a Tetrahedron : ";
    int tetra;
    cin >> tetra;
    cout << "Tetra(" << tetra << ") : "<< getTetrahedral(tetra);
}
