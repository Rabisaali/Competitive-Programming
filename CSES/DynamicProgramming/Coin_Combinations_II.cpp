#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


// int fun(int sum, int in, vector<int>& c) {
//     if(sum==0) return 1;
//     if(in==0) return 0;
//     //if(sum<0) return 0;
//     if(dp[sum][in]!=-1) return dp[sum][in];
//     int ans=0;
//     if (sum-c[in-1]>=0) ans = fun(sum-c[in-1], in, c);
//     ans += fun(sum, in-1, c);
//     ans%=1000000007LL;
//     return dp[sum][in]=ans;
    
// }
 
signed main () {
    fastnuces;
    int n, x;
    cin >> n >> x;
    vector<int>c(n);
    for(int i=0; i<n; i++) cin >> c[i];
    //sort(c.begin(), c.end());
    //int val = fun(x, n, c);
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int in=0; in<n; in++) {
        for(int sum=c[in]; sum<=x; sum++) {
            dp[sum]+=dp[sum-c[in]];
            dp[sum]%=1000000007LL;
        }
    }
    cout << dp[x] << "\n";
    return 0;
}