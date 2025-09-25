// Petya and Strings

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    /* So we read each element of the string s1/s2 as both have same length.
    Convert all elements to a specific case so that we can compare ASCII values */

    for (int i = 0; i < s1.length(); ++i)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    // Comparing ASCII values
    if (s1 < s2)
    {
        cout << -1;
    }
    else if (s1 > s2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}