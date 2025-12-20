// Drinks

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<double> store(n);
    double sum = 0;

    for(int i = 0;i < n; i++ ){
        cin >> store[i];
        sum +=  store[i];
    }

    double output = sum/n;
    
    cout << output << "\n";
    return 0;
}