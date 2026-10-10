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

#define f(i,s,e) for(ll i=s;i<e;i++)
#define fn(i,s,e) for(int i=s;i>=e;i--)
#define printv(vec) for(auto &value: vec) cout<<value<<" ";
#define inputv(vec) for(auto &value: vec) cin>>value;

#define pb push_back
#define pp pop_back
#define eb emplace_back
#define all(s) s.begin(), s.end()
#define sa(vec) sort(vec.begin(), vec.end())
#define sr(vec) sort(vec.begin(), vec.end(), greater<int>())

bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll modexp(ll a, ll b, ll m) { ll res = 1; a %= m; while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b >>= 1; } return res; }
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);int t = 1;
void solve () {
    int n, x;
    cin >> n >> x;
    //cout << ".";
    // int v=n*n;
    // if (v<=x) {
    //     cout << 2*n-1 << "\n";
    //     return;
    // }
    //int k=0;
    //int ans=0;
    // f(i, 1, 2*n) {
    //     // int k=i*(i+1)/2;
    //     // if (k>=n*(n+1)/2) {
    //     //     k-=(n-i);
    //     //     if (k >= x) {
    //     //         cout << i << "\n";
    //     //         return;
    //     //     }
    //     // }
    //     // if (k >= x) {
    //     //     cout << i << "\n";
    //     //     return;
    //     // }
    //     if (i<=n) ans+=(++k);
    //     else ans+= (--k);
    //     if (ans>=x) {
    //         cout << i << "\n";
    //         return;
    //     } 
    // }
    // cout << 2*n - 1 << "\n";

    int l=1, r=2*n-1;
    while(l<r) {
        int mid = l+(r-l)/2;
        int ans;
        if(mid<=n) ans=mid*(mid+1)/2;
        else {
            int rem=2*n-1-mid;
            ans=n*n - rem*(rem+1)/2;
        }

        if (ans>=x) r=mid;
        else l=mid+1; 
    }
    cout << l << "\n";
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