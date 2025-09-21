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

        /*std::string::npos is a special constant used to indicate that something was not found in a string.
        When you use functions like .find(), they return the position of the substring if found.
        If the substring is not found, .find() returns string::npos.*/

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