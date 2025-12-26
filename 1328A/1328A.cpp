// Divisibility Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            // This is the formula that counts in how many moves a will be divisible by b
            cout << b - (a % b) << "\n";
        }
    }
    return 0;
}
