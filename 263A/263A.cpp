// Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;

    // Loop through each row (i) and each column (j) of the 5×5 matrix.
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            // Take values from user
            int x;
            cin >> x;

            // Checking when 1 occurs in matrix and storing it's position
            if (x == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    /* Using Manhattan distance formula, distance = |(x1 - x2)| + |(y1 - y2)| since we scan through the matrix
    and found the position having 1 and we also know the center of matrix ie. (2,2) so, d = |(row - 2)| + |(col - 2)|
    We used absolute abs to avoid -ve */

    int step = abs(row - 2) + abs(col - 2);
    cout << step;
    return 0;
}