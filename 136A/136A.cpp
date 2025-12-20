// Presents
/* Input says: “who gave to whom.”
Output should say: “who received from whom.” */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n), q(n);

    // storing friends no. inside p
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    // connecting give and take
    for (int i = 0; i < n; i++)
    {
        // storing the elemental values in giver
        int giver = p[i];

        /*mapping elements such that q[1] = 1, q[2] = 2 etc.. means friend 1 got gift from 2, friend 2 got gift from 3*/
        q[giver - 1] = i + 1;
    }

    // print the q in order so it get reverses 
    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }

    return 0;
}