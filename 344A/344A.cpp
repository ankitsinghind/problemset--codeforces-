// Magnets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, current, previous, group = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> current;
        if (i == 0 || current != previous)
        {
            group++;
        }

        previous = current;
    }

    cout << group;

    return 0;
}