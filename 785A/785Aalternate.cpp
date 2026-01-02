// simple way using if else

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int faces = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
        {
            faces += 4;
        }
        else if (s == "Cube")
        {
            faces += 6;
        }
        else if (s == "Octahedron")
        {
            faces += 8;
        }
        else if (s == "Dodecahedron")
        {
            faces += 12;
        }
        else if (s == "Icosahedron")
        {
            faces += 20;
        }
    }

    cout << faces;
    return 0;
}
