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
#define sr(vec) sort(vec.begin(), vec.end(), greater<int>())

bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll modexp(ll a, ll b, ll m) { ll res = 1; a %= m; while (b > 0) { if (b & 1) res = (res * a) % m; a = (a * a) % m; b >>= 1; } return res; }
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// void solve () {
    
// }
signed main () {
    fastnuces;
    int n, m, k;
    cin >> n >> m >> k;
    vi a(m); vi b(k);
    inputv(a);
    inputv(b);
    vvi ans(m);
    vvi temp(m);
    f(i, 0, m) {
        f(j, 0, k) {
            if (b[j]%a[i]==0) {
                ans[i].pb(b[j]);
                temp[i].pb(b[j]);
            }
        }
    }
    sort(ans.begin(), ans.end(), [](const auto& a, const auto& b) {
        return a.size() < b.size();
    });
    //sa(ans);
    int count=0;
    vi f;
    int min = ans[0].size(); 
    //f.pb();
   // count++;
    f(i, 0, m) {
        if (temp[i].size()==min) {
            count++;
            f.pb(i+1);
        }
    }
    cout << count << "\n";
    f(i, 0, count) cout << f[i] << " ";
    cout << "\n";

    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    return 0;
}