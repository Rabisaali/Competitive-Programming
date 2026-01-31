#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL x, y, n;
        cin >> x >> y >> n;
        LL ans = (n/x) * x;
        if (ans+y <= n) cout << ans+y << "\n";
        else cout << ans+y-x << "\n";
    }
}