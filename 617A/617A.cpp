// Elephant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    /* int result = ceil(x / 5.0);

    Using floating points slows the program so instead of using floating point
    division and ceil(),we use integer math to simulate ceiling behavior.*/

    int result = (x + 4) / 5;

    // (x + ( n-1 ) ) / x; where x is max no. of steps

    cout << result;
}