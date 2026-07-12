#include<bits/stdc++.h>
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<vector<int>> dp;
//vector<vector<int>> vis(1001, vector<int>(1001, 0));
int fun(string& a, string& b, int n, int m) {
    //if(n==1 || m==1) {
        if (n<0) {
            return m;
        }
        if (m<0) {
            return n;
        }
    //}
    if (dp[n][m] != -1) return dp[n][m];
    int ans;
    if(a[n]==b[m]) {
        //c.push_back(b[m]);
        ans = fun(a, b, n-1, m-1);
        //return dp[n][m]=ans;
    }
    else {
        ans = 1+min({fun(a, b, n-1, m), fun(a, b, n, m-1), fun(a, b, n-1, m-1)});
    }
    //string ans;
    // if (ans1.length()>ans2.length()) ans = ans1;
    // else ans = ans2;
    
    //vis[n][m] = 1;
    return dp[n][m]=ans;
}
signed main () {
    fastnuces;
    //int n, m;
    // cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    //int t = min(n, m);
    dp.assign(n, vector<int>(m, -1));
    // for(int i=0; i<n; i++) cin >> a[i];
    // for(int j=0; j<m; j++) cin >> b[j];
    //vector<char>c;
    int q=fun(a, b, n-1, m-1);
    cout << q+1 << "\n";
    //for(int i=0; i<v; i++) cout << q[i] << " ";
    //for(int i=0; i<q; i++) cout << c[i] << " ";

    return 0;
}