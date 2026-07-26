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
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);int t = 1;
void solve () {
    int n, m;
    cin >> n >> m;
    vi a;
    vvi mt(n, vector<int>(m));
    int x=0;
    int r, c;
    int count=0;
    bool spot=false;
    f(i, 0, n) {
        f(j, 0, m) {
            cin >> mt[i][j];
            if (mt[i][j]>x) {
                x=mt[i][j];
                // r=i;
                // c=j;
                // spot=false;
                count=1;
            }
            else if (mt[i][j]==x) count++; 
        }
    }
    int maxc=0;
    f(i, 0, n) {
        f(j, 0, m) {
            
                int tempc=0;
                if (mt[i][j]==x) tempc-=1;
                f(k, 0, m) {
                    if (mt[i][k]==x) tempc++;
                }
                f(k, 0, n) if (mt[k][j]==x) tempc++;
                if (tempc>maxc) maxc=tempc;
        }
    }
    if (maxc==count) cout << x-1 << "\n";
    else cout << x << "\n";
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