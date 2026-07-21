#include<bits/stdc++.h>
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<vector<int>> dp;
//vector<int> c;
//vector<vector<int>> vis(1001, vector<int>(1001, 0));
int fun(vector<int>& a, vector<int>& b, int n, int m) {
    if(n<=0 || m<=0) return 0;
    if (dp[n][m] != -1) return dp[n][m];
    int ans=0;
    if(a[n-1]==b[m-1]) {
        //c.push_back(b[m]);
        ans = fun(a, b, n-1, m-1)+1;

    }
    else {
        ans = fun(a, b, n-1, m);
        ans = max(ans, fun(a, b, n, m-1));
    }
    return dp[n][m]=ans;
}
signed main () {
    fastnuces;
    int n, m;
    cin >> n >> m;
    vector<int>a(n), b(m);
    dp.assign(n+1, vector<int>(m+1, -1));
    for(int i=0; i<n; i++) cin >> a[i];
    for(int j=0; j<m; j++) cin >> b[j];
    int q=fun(a, b, n, m);
    cout << q << "\n";
    //for(int i=q-1; i>=0; i--) cout << c[i] << " ";
    int i=n;
    int j=m;
    vector<int> c;
    while(i>0 && j>0) {
        if (a[i-1]==b[j-1]) {
            c.push_back(a[i-1]);
            i--;
            j--;
        }
        else if (dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    for(int i=q-1; i>=0; i--) {
        cout << c[i] << " ";
    }
    return 0;
}