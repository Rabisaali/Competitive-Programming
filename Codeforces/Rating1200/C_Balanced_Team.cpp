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
    // vi a(n);
    // int c=1;
    // f(i, 0, n) {
    //     cin >> a[i];
    //     if (i==0) continue;
    //     else if (a[i-1]==a[i]) c++;
    // }
    // if (c==n) {
    //     cout << n << "\n";
    //     return;
    // }
    // sa(a);

    // int count=0;
    // f(i, 0, n-1) {
    //     int j=i+1;
    //     while(j<n && a[j]-a[j-1]<=5 && a[j]-a[i]<=5) j++;
    //     count=max(count, j-i);
    //     if (j==n-1) break;
    // }
    // cout << count << "\n";

    mp a;
    f(i, 0, n) {
        int x;
        cin >> x;
        a[x]++;
    }
    vpi b;
    for(auto x: a) {
        b.pb({x.first, x.second});
    }
    int count=0;
    int s=b.size();
    if (s==1) {
        cout << n << "\n";
        return;
    }
    f(i, 0, s) {
        int j=i+1;
        int t=b[i].second;
        while(j<s && b[j].first-b[j-1].first<=5 && b[j].first-b[i].first<=5) {
            t+=b[j].second;
            j++;
        }
        count=max(count, t);
    }
    cout << count << "\n";

}
signed main () {
    fastnuces;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}