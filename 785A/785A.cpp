// Anton and Polyhedrons

#include <bits/stdc++.h>
using namespace std;
main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> store = {

        {"Tetrahedron", 4},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
        {"Cube", 6}};

    int faces = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        faces += store[s];
    }

    cout << faces;

    return 0;
}