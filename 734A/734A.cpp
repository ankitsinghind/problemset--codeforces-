// Anton and Danik

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s.length() != n)
    {
        cout << "Invalid input: string length doesn't match number of games.";
        return 1; // Exit with error
    }

    int count_A = 0, count_D = 0;

    for (char c : s)
    {
        if (c == 'A')
        {
            count_A++;
        }

        else
        {
            count_D++;
        }
    }

    if (count_A > count_D)
    {
        cout << "Anton";
    }

    else if (count_A < count_D)
    {
        cout << "Danik";
    }

    else
    {
        cout << "Friendship";
    }
    return 0;
}
