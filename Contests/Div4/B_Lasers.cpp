#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<LL>a(n);
        vector<LL>b(m);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
        }
        for (LL i=0; i<m; i++) {
            cin >> b[i];
        }
        LL ans = n+m;
        cout << " \n" << ans;
    }
}