// Word

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int countl = 0, countu = 0;

    // Count lowercase and uppercase letters
    for (char c : s)
    {
        if (islower(c))
            countl++;
        else
            countu++;
    }

    if (countu > countl)
    {
        for (int i = 0; i < s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }

    else
    {
        for (int i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}