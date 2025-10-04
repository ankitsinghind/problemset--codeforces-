// Nearly Lucky Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;

    for (char ch : n)
    {
        if (ch == '4' || ch == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}