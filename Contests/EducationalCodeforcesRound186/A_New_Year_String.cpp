#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s.find("2025") == string::npos || s.find("2026") != string::npos) {
            cout << 0 << '\n';
            continue;
        }

        const string bad = "2025";
        const string good = "2026";
        int ans = INT_MAX;

        vector<int> need(n, 0);
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == bad) {
                for (int j = i; j < i + 4; j++) {
                    need[j]++;
                }
            }
        }
        int breaks = 0;
        for (int x : need)
            if (x > 0) breaks++;

        ans = min(ans, breaks);

        for (int i = 0; i + 3 < n; i++) {
            int cost = 0;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != good[j]) cost++;
            }
            ans = min(ans, cost);
        }

        cout << ans << '\n';
    }
    return 0;
}
