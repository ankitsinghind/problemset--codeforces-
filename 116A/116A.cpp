// Tram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    int current = 0; // Current no. of passengers at a time
    int max_capacity = 0; // Max. no. of passengers

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;

        current -= a; // Passengers exit first
        current += b; // Then passengers enter

        if (current > max_capacity)
        {
            max_capacity = current;
        }
    }

    cout << max_capacity;

    return 0;
}