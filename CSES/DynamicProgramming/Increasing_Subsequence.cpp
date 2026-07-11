#include<bits/stdc++.h>
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//vector<int>dp(200001, -1);
//vector<vector<int>> vis(1001, vector<int>(1001, 0));
int fun(vector<int>& a, int n) {
    //if(n<0) return 0;
    //if(a[n-1]<a[n]) return ;
    // if (dp[n] != -1) return dp[n];
    // int ans=1;
    // //if (a[n]<x) ans+=1;
    // for(int i=0; i<n; i++) if(a[n]>a[i]) ans = max(ans, fun(a, i)+1);
    // return dp[n]=ans;
    vector<int>ans;
    for(auto it: a) {
        auto x = lower_bound(ans.begin(), ans.end(), it);

        if (x==ans.end()) ans.push_back(it);
        else *x = it;
    }
    return ans.size();
}
signed main () {
    fastnuces;
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    cout << fun(a, n) << "\n";

    return 0;
}