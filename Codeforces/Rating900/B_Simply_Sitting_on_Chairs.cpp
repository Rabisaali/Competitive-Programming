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
#define fn(i,s,e) for(int i=s;i>=e;i--)
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
void solve () {
    int n;
    cin >> n;
    vi a(n);
    inputv(a);
    int mx=0;
    // if (n==1) {
    //     cout << "1\n";
    //     return;
    // }
    // if (n==a[0]) {
    //     cout << n-1 << "\n";
    //     return;
    // }
    int count=0;
    //int count2=0;
    f(i, 0, n) {
        // //int count = 0;
        // if (i+1 < n && a[i]-a[i+1] == 1) count++;
        // if (a[i]==i+1) count2++;
        // mx = max(mx, a[i]-i-1); 
        // f(j, i+1, mx-1) {
        //     if (a[j]-a[j+1] == 1 && a[j+1]==j+1 && a[j]==j+2) mx--;
        // }
        if (a[i]<=i+1) count++;
    }
    //cout << max(mx, max(count, count2)) << "\n";
    cout << count << "\n";
}
signed main () {
    fastnuces;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}