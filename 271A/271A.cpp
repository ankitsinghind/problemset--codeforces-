// Beautiful Year

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;

        string s = to_string(y);

        set<char> digits(s.begin(), s.end()); // or ' unordered_set <char> digits(s.begin(), s.end()) ' both are same

        if (digits.size() == 4) // or digits.size() == s.size() as size of string s is also 4. We cannot use y.size() as its int type
        {
            cout << y << "\n";
            break;
        }
    }

    return 0;
}
