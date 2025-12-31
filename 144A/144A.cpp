// Arrival of the General

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // FIND MAX FROM LEFTMOST

    // max_element(...) → returns an iterator pointing to the max element.
    // * → dereferences that iterator to get the actual integer value.
    // maxVal → stores that integer.

    int maxval = *max_element(a.begin(), a.end());

    /* Array indices in C++ go from 0 to n - 1.
    That means any valid position will be ≥ 0.
    By setting maxPos = -1,we guarantee it’s an invalid index until we assign a real one.
    This helps us detect errors : if the loop never finds the maximum(which theoretically shouldn’t happen),
    maxPos stays - 1 and we know something went wrong.
    Think of -1 as a placeholder like saying:
    "I don’t know the position yet, but once I find it, I’ll overwrite this with the real index." */

    int maxpos = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxval)
        {
            maxpos = i;
            break;
        }
    }

    // FIND MIN FROM RIGHRMOST

    int minval = *min_element(a.begin(), a.end());
    int minpos = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == minval)
        {
            minpos = i;
            break;
        }
    }

    /* n = 7
    a = {10, 10, 58, 31, 63, 40, 76}
    Rightmost minimum = 10 at index 1.
    Last index = n - 1 = 6.
    Distance = 6 - 1 = 5.
    So it takes 5 swaps to bubble that 10 to the end.

    ANOTHER EXAMPLE

    n = 5
    a = {4, 3, 2, 1, 1}
    Rightmost minimum = 1 at index 4.
    Last index = n - 1 = 4.
    Distance = 4 - 4 = 0.
    So no swaps are needed — it’s already at the end. */

    int swaps = maxpos + (n - 1 - minpos); // Add both the no. of swaps required

    /* We need maxPos = 6 swaps to bubble 76 leftwards:
    Initial: 10 10 58 31 63 40 76
    Swap 1: 10 10 58 31 63 76 40
    Swap 2: 10 10 58 31 76 63 40
    Swap 3: 10 10 58 76 31 63 40
    Swap 4: 10 10 76 58 31 63 40
    Swap 5: 10 76 10 58 31 63 40
    Swap 6: 76 10 10 58 31 63 40
    Now 76 is at the front.

    Step 2: Where is the Min Now?
    Originally, the rightmost 10 was at index 1.
    But wait — when we moved 76 left, it crossed over the 10 at index 1. Now it is at index 2. That means one of those swaps already “helped” move the 10 closer to the end. So we counted one swap twice. */

    if (maxpos > minpos)
    {
        swaps--;
    }

    cout << swaps;

    return 0;
}