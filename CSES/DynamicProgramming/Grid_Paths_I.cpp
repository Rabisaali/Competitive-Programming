#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

signed main () {
    fastnuces;
    int n;
    cin >> n;
    vector<string>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<vector<int>>dp(n, vector<int>(n, 0));
    if(a[0][0]=='*') {
        cout << "0\n";
        return 0;
    }
    dp[0][0]=1;
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]=='*') continue;
            if(i>0) dp[i][j] += dp[i-1][j];
            if(j>0) dp[i][j] += dp[i][j-1];
            dp[i][j]%=1000000007LL;
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}