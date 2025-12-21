// Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> shoes = {s1, s2, s3, s4};

    // the minimum number of horseshoes Valera needs to buy bcz shoes.size() shows the distinct no. of shoes.
    cout << 4 - shoes.size() << " ";

    return 0;
}