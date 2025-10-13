// In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] == 1)
        {
            count = 1;
        }
    }

    if (count > 0)
    {
        cout << "HARD" << "\n";
    }
    else
    {
        cout << "EASY" << "\n";
    }
    return 0;
}