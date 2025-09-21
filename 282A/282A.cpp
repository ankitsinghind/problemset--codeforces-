// Bit++

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

        // std::string::npos is a special constant used to indicate that something was not found in a string.
        
        if (bit.find("++") != string ::npos)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count << endl;
    return 0;
}