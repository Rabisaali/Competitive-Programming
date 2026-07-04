#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL x, y;
        cin >> x >> y;
        if (x-y >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
}