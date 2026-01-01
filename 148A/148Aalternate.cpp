#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int dragons = 0;

    for (int i = 1; i <= d; i++)
    {
        // checking each divisiblity and if any one case is true then +1 dragons count

        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            dragons++;
        }
    }

    cout << dragons;
    return 0;
}