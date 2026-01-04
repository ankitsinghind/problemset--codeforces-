// Fox and Snake

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    /* For row i (1-indexed):
    If i is odd → print m times #.
    If i is even:
    If (i/2) is odd → put # at the rightmost column.
    If (i/2) is even → put # at the leftmost column. */

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // odd
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            // Even rows mostly . and # at the end

            if ((i / 2) % 2 == 1)
            {
                // If i/2 is odd then # at rightmost and others "."

                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                // If i/2 is even then # at leftmost and other "."
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}