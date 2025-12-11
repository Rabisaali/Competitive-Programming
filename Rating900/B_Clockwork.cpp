#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector <LL> a(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
        }
        if (a[0]-n > 1) cout << "YES\n";
        else cout << "NO\n";
    }
}