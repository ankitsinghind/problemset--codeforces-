/* So alternatively we will store all no. of currrent passengers at each stop in passenger_counts and use
built in function 'max_element' to get the max. no. of passengers at that time which will be the required capacity for the tramp */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 0;

    vector<int> passenger_counts;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;

        passenger_counts.push_back(current);
    }

    /* The ' * ' is the dereference operator. It means: Give me the actual value stored at that location. Imagine max_element(...)
    gives you a finger pointing at the biggest cookie in a jar. Using * is like saying: “Don’t just point—give me the cookie!” */

    int capacity = *max_element(passenger_counts.begin(), passenger_counts.end());

    cout << capacity << "\n";

    return 0;
}