#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    vector<int>a(9);
    for (int i=0; i<9; i++) cin >> a[i];
    int sum=0;
    for (int i=0; i<9; i++) {
        sum+=a[i];
    }
    cout << 55-sum << "\n";
}