#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    // Take values and store them
    int scores[50]; // Since n ≤ 50
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }

    // Since indexing starts from 0 and postion starts from 1, adjust them
    int limit = scores[k - 1]; // Score of the k-th place finisher
    int count = 0;

    // Check and functionality
    for (int i = 0; i < n; ++i)
    {
        if (scores[i] >= limit && scores[i] > 0)
        {
            ++count;
        }
    }

    cout << count << "\n";
    return 0;
}
