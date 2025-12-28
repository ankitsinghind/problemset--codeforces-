#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // from s.begin() to s.end() takes the whole string. s.begin() overwrites and stores the string to lowercase using ::tolower()
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // stores the lowercases string that was transformed. set<char> removing duplicates storing only unique charcaters
    set<char> letters(s.begin(), s.end());

    if (letters.size() == 26)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}