#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        string bit;
        cin >> bit;
        if (bit[1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count << "\n";
    return 0;
}