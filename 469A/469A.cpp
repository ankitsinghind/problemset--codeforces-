// I Wanna Be the Guy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> levels;

    int p, q, x;
    cin >> p;

    for (int i = 1; i <= p; i++)
    {
        cin >> x;

        levels.insert(x);
    }

    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        cin >> x;

        levels.insert(x);
    }

    if (levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}