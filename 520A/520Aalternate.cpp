#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() == n)
    {
        if (s.size() < 26)
        {
            cout << "NO" << "\n";
        }
        else
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            set<char> letters(s.begin(), s.end());

            if (letters.size() == 26)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}