#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        string s;
        cin >> s;

        vector<LL> next1(n, n);
        LL last = n;
        for (LL i = n-1; i >= 0; i--) {
            if (s[i] == '1') last = i;
            next1[i] = last;
        }

        LL ans = 0;
        for (LL i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans = max(ans, next1[i] - i);
            }
        }
        cout << ans << "\n";
    }
}