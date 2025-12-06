#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<vector<long long>> dp(k+1, vector<long long>(k+1, -1));
        dp[0][0] = 0;

        for (int i = 0; i < n; i++) {
            vector<vector<long long>> newdp(k+1, vector<long long>(k+1, -1));
            for (int used = 0; used <= k; used++) {
                for (int curMax = 0; curMax <= k; curMax++) {
                    if (dp[used][curMax] == -1) continue;

                    long long val = dp[used][curMax] + curMax;
                    newdp[used][curMax] = max(newdp[used][curMax], val);

                    for (int x = 1; x <= a[i] && used + x <= k; x++) {
                        int newUsed = used + x;
                        int newMax = max(curMax, x);
                        long long val2 = dp[used][curMax] + newMax;
                        newdp[newUsed][newMax] = max(newdp[newUsed][newMax], val2);
                    }
                }
            }
            dp.swap(newdp);
        }

        long long answer = 0;
        for (int used = 0; used <= k; used++) {
            for (int curMax = 0; curMax <= k; curMax++) {
                answer = max(answer, dp[used][curMax]);
            }
        }
        cout << answer << "\n";
    }
    return 0;
}