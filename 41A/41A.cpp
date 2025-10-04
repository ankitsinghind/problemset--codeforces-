// Translation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    bool isreverse = true;
    // Take isreverse as true always

    /* Both string elements are same if one is reversed.
    To check that ' s.length() - 1 - i ' index is important */

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != t[s.length() - 1 - i])
        {
            isreverse = false;
            break;
        }
    }

    /* If both string elements are not same by reversing one then isreverse is set to false and for loop breaks
    as there is no need to check other elements */

    if (isreverse == true && s.length() == t.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}