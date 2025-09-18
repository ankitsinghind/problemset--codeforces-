// Way Too Long Words

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s.back() << "\n"; // 1st element + length of string - 2 as it excludes first and last + back element
        }
        else
        {
            cout << s << "\n";
        }
    }
    return 0;
}