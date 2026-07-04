//Bismillah
#include <bits/stdc++.h>
#define nl endl;
using namespace std;

#define YN(condition) cout<<(condition?"YES":"NO")
#define yn(condition) cout<<(condition?"Yes":"No")

#define int long long
#define ll long long
#define ld long double
#define pii pair<int,int>

#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mp map<int,int>
#define uset unordered_set<int>
#define ump unordered_map<int,int>

#define f(i,s,e) for(int i=s;i<e;i++)
#define fn(i,s,e) for(int i=s;i>=e;i++)
#define printv(vec) for(auto &value: vec) cout<<value<<endl;
#define inputv(vec) for(auto &value: vec) cin>>value;

#define pb push_back
#define pp pop_back
#define eb emplace_back
#define all(s) s.begin(), s.end()
#define sa(vec) sort(vec.begin(), vec.end())

bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll modexp(ll a, ll b, ll m) { ll res = 1; a %= m; while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b >>= 1; } return res; }
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);int t = 1;

vvi dp(101, vi(100001, -1));

int solve (vi wt, vi val, int n, int weight) {
    if (n==0 || weight==0) return 0;
    if (dp[n][weight]  != -1) return dp[n][weight];

    int pick = 0;

    if(weight-wt[n-1]>=0) pick += val[n-1] + solve(wt, val, n-1, weight-wt[n-1]);

    int notpick = solve(wt, val, n-1, weight);

    return dp[n][weight]=max(pick, notpick);
}
signed main () {
    fastnuces;
    // cin >> t;
    // while (t--) {
    //     
    // }
    //solve();
    int n, w;
    cin >> n >> w;
    vi wt(n);
    vi val(n);
    f(i, 0, n) {
        cin >> wt[i] >> val[i];
    }
    
    cout << solve(wt, val, n, w);
    return 0;
}