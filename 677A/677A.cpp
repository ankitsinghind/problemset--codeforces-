// Vanya and Fence

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;

    cin >> n >> h;

    vector<int> a(n);

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        if (a[i] <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }
    cout << sum << "\n";
    return 0;
}