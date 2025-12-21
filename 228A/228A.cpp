// Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    /*set<int>(first, last)
    
    This constructor takes a range of iterators and inserts all elements from that range into the set
    Any duplicates are automatically removed because a set only stores unique values.*/

    set<int> shoes(s.begin(), s.end());

    // the minimum number of horseshoes Valera needs to buy bcz shoes.size() shows the distinct no. of shoes.
    cout << 4 - shoes.size() << " ";

    return 0;
}