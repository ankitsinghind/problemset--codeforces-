#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, moves;
        moves = 0;

        cin >> a >> b;

        while (a % b != 0)
        {
            a++;
            moves++;
        }
        cout << moves << "\n";
    }
    return 0;
}