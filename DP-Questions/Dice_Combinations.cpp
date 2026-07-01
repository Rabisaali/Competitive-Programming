#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

signed main () {
    fastnuces;
    int n;
    cin >> n;
    vector<int>dp(n+1, 0LL);
    dp[0]=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=6 && i-j>=0; j++) {
            dp[i]+=dp[i-j];
            dp[i]%=1000000007LL;
        }
    }
    cout << dp[n] << "\n";
    return 0;
}