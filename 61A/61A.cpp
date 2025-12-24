// Ultra - Fast Mathematician

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int n = s1.size();

    vector<int> a(n), b(n), result(n);

    /*
    s1[i] and s2[i] are characters from the input strings.

    For example, if s1 = "1010", then:
    s1[0] = '1'
    s1[1] = '0'
    etc.

    In C++ a character like '1' is stored as its ASCII code:
    '0' → ASCII value 48
    '1' → ASCII value 49
    If you directly store s1[i] into an int, you’d get 48 or 49, not the actual digit 0 or 1.
    To convert from character '0'/'1' to integer 0/1, you subtract '0':

    '1' - '0' = 49 - 48 = 1
    '0' - '0' = 48 - 48 = 0

    */

    // Assigning values of s1 and s2 to a and b while converting them to int
    for (int i = 0; i < n; i++)
    {
        a[i] = s1[i] - '0';
        b[i] = s2[i] - '0';

        if (a[i] == b[i])
        {
            result[i] = 0;
        }
        else
        {
            result[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i];
    }

    return 0;
}