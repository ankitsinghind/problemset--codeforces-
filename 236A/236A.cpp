// Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string username;
    cin >> username;

    /* unordered_set is a special function that stores only distanct elements.
    unordered_set <char> takes only distanct characters and store it into function distanct_c */

    unordered_set<char> distanct_c;

    // Loop take each character from username everytime and insert it into distinct_c which filter repetitive char
    for (char c : username)
    {
        distanct_c.insert(c);
    }

    // Checks if distinct characters are even
    if (distanct_c.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}