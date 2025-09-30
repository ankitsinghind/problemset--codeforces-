#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int countl = 0, countu = 0;

    // Count lowercase and uppercase letters
    for (char c : s)
    {
        if (islower(c))
            countl++;
        else
            countu++;
    }

    /* Instead of Changing each character as in 59A through loop. We use transform to apply the changes altogether.

    transform(...): A standard algorithm from <algorithm> that applies a function to a range of elements.

    s.begin() and s.end(): Define the range of characters in the string s that we want to transform.

    The third argument s.begin() is the destination—we're writing the transformed characters back into the same string.

    ::toupper: A function from <cctype> that converts a single character to uppercase. The :: means it's the global version,
     not a member function.*/

    if (countu > countl)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;
    return 0;
}