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
    int n;
    cin >> n;
    vi a(n);
    // vi pree;
    // vi preo;
    // f(i, 0, n) {
    //     cin >> a[i];
    //     if (i%2==0) {
    //         if(i==0) pree.pb(a[i]);
    //         else pree.pb(a[i]+pree.back());
    //     }
    //     else {
    //         if (i==1) preo.pb(a[i]);
    //         else preo.pb(a[i]+preo.back());
    //     }
    // }
    // int preei=size(pree)-1;
    // int preoi=size(preo)-1;
    // while(preei>=0 && preoi>=0) {
    //     if (pree[preei]==preo[preoi]) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if (pree[preei]>preo[preoi]) preei--;
    //     else preoi--;
    // }
    // preei=0, preoi=0;
    // while(preei<size(pree) && preoi<size(preo)) {
    //     if (pree[preei]==preo[preoi]) {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if (pree[preei]>preo[preoi]) preei++;
    //     else preoi++;
    // }
    // cout << "NO\n";

    inputv(a);

    mp seen;
    int diff=0;
    seen[diff]=1;

    f(i, 0, n) {
        if (i%2==0) diff+=a[i];
        else diff-=a[i];

        if (seen[diff]) {
            cout << "YES\n";
            return;
        }
        seen[diff]++;
    }
    cout << "NO\n";
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