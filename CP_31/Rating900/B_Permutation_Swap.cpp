#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        //vector<LL>a(n);
        LL ans = 0;
        //LL x;
        for (LL i=1; i<=n; i++) {
            LL x;
            cin >> x;
            ans = gcd(ans, abs(x-i));
        }
        cout << ans << "\n";
    }
}