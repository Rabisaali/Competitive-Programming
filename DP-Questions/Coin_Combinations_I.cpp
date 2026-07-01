#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int>dp(1e7+5, -1);
int fun(int sum, vector<int>& c) {
    if(sum==0) return 1;
    if(sum<0) return 0;
    if(dp[sum]!=-1) return dp[sum];
    int ans=0;
    for(int coin: c) {
        if(sum-coin>=0) {
            ans += fun(sum-coin, c);
            ans%=1000000007LL;
        }
    }
    ans%=1000000007LL;
    return dp[sum]=ans;
}

signed main () {
    fastnuces;
    int n, x;
    cin >> n >> x;
    vector<int>c(n);
    for(int i=0; i<n; i++) cin >> c[i];
    int val = fun(x, c);
    cout << val << "\n";
    return 0;
}