#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string hate_s = "I hate";
    string love_s = "I love";

    for (int i = 1; i <= n; i++)
    {
        // choose hate or love based on odd/even
        if (i % 2 == 1)
        {
            cout << hate_s;
        }
        else
        {
            cout << love_s;
        }

        // decide whether to end or continue
        if (i == n)
        {
            cout << " it"; //end
        }
        else
        {
            cout << " that "; //continue
        }
    }

    cout << "\n";
    return 0;
}
