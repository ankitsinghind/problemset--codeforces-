#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string onlynumbers;

    // Skip +
    for (char c : s)
    {
        if (c != '+')
        {
            onlynumbers += c;
        }
    }

    // Sort the onlynumbers
    sort(onlynumbers.begin(), onlynumbers.end());

    // Print the sorted sum
    for (int i = 0; i < onlynumbers.size(); ++i)
    {
        if (i > 0)
            cout << "+";
        cout << onlynumbers[i];
    }

    return 0;
}
