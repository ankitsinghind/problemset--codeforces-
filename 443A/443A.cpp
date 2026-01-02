// Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s); // reads entire input using commas and braces and stores in s

    set<char> letters;

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            letters.insert(c);
        }
    }

    cout << letters.size();
    return 0;
}