#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// vector<vector<int>>dp(100001, vector<int> (1001, -1));
// int fun(vector<int>& h, vector<int>& s, int n, int x) {
//     if (n<0) return 0;
//     if(dp[x][n]!=-1) return dp[x][n];
//     int ans = fun(h, s, n-1, x);
//     if(x-h[n]>=0) ans = max(ans, fun(h, s, n-1, x-h[n])+ s[n]);
//     return dp[x][n] = ans;
// }
signed main () {
    fastnuces;
    int n, x;
    cin >> n >> x;
    vector<int>h(n), s(n);
    for(int i=0; i<n; i++) {
        cin >> h[i];
    }
    for(int i=0; i<n; i++) {
        cin >> s[i];
    }
    vector<int>dp(x+1, 0);
    dp[0]=0;
    for(int j=0; j<n; j++) {
        //int ans=0;
        for(int i=x; i>=h[j]; i--) {
            //dp[i] = dp[i-1];
            dp[i] = max(dp[i], dp[i-h[j]]+s[j]);
        }
    }
    cout << dp[x] << "\n";
    //cout << fun(h, s, n-1, x) << "\n";
    return 0;
}