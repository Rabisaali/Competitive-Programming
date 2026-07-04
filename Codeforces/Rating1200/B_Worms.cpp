#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector<LL>a(n), p(n);
    LL sum=0;
    for (LL i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
        p[i]=sum;
    }
    LL m;
    cin >> m;
    while (m--) {
        LL q;
        cin >> q;
        LL ans = lower_bound(p.begin(), p.end(), q)-p.begin();
        cout << ans+1 << "\n";
    }
}