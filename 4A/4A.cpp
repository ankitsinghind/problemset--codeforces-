// Watermelon

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;

    // w = 2 → can't split into two positive even numbers.
    if (w > 2 && w % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}