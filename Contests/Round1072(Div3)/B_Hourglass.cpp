#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long ans;
        if (s < k) {
            cout << "0\n";
        } else if (k==m) {
            cout << m << "\n";
        }
        else {
            int ans = min(k, m-k);
            cout << ans << "\n";
        }
    }
    return 0;
}