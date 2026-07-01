#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int>dp(1e6+5, -1);
int fun(int sum, vector<int>& c) {
    if(sum==0) return 0;
    if(dp[sum]!=-1) return dp[sum];
    int ans=LLONG_MAX;
    for(int coin: c) {
       
        if(sum-coin>=0) {
            int val = fun(sum-coin, c);
            if(val!=LLONG_MAX) ans = min(ans+0LL, fun(sum-coin, c)+1LL);
        }
    }
    
    return dp[sum]=ans;
}
 
signed main () {
    fastnuces;
    int n, x;
    cin >> n >> x;
    vector<int>c(n);
    for(int i=0; i<n; i++) cin >> c[i];
    int val = fun(x, c);
    if(val==LLONG_MAX) cout << "-1\n";
    else cout << val << "\n";
    return 0;
}