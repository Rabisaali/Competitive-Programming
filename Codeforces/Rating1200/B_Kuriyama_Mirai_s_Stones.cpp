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
    int n, m, l, r, type;
    cin >> n;
    vi v(n);
    inputv (v);
    vi vsort(n);
    vsort[0]=v[0];
    f(i, 1, n) {
        vsort[i] = v[i]+vsort[i-1];
    }
    cin >> m;
    vi b = v;
    sa (b);
    vi bsort(n);
    bsort[0] = b[0];
    f(i, 1, n) {
        bsort[i] = b[i] + bsort[i-1];
    }
    while (m--) {
        cin >> type >> l >> r;
        int total = 0;
        if (type == 1) {

            if (l==1) cout << vsort[r-1] << "\n";
            else {
                total = vsort[r-1] - vsort[l-1] + v[l-1];
                cout << total << "\n";
            }
            //cout << total << "\n";
        }
        else {
            if (l==1) cout << bsort[r-1] << "\n";
            else {
                cout <<  bsort[r-1] - bsort[l-1] + b[l-1] << "\n";
            }
        }
    }
    
}
signed main () {
    fastnuces;
    
        solve();
    return 0;
}