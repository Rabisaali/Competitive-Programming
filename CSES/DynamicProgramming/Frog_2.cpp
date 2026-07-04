#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n, k;
vector<int>dp;
vector<int>a;
int func(int i) {
    int ans = INT_MAX;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    for(int j=1; j<=k; j++) {
        if(i-j>=0) ans = min(ans, abs(a[i]-a[i-j])+func(i-j));
    }
    
    //if(i>1) ans = min(ans, abs(a[i]-a[i-2])+func(i-2));
    
    return dp[i]=ans;
}
signed main () {
    fastnuces;
    cin >> n >> k;
    dp.assign(n,-1);
    a.resize(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cout << func(n-1);
    return 0;
}