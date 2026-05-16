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
    int a, n;
    cin >> a >> n;
    vi d(n);
    inputv (d);
    int place = 0;
    int temp=a;
    while(temp!=0) {
        temp/=10;
        place++;
    }
    int val=0;
    int val1=0, val2=0, val3=0, val4=0;
    f(i, 0, place) {
       val1 = val1 * 10 + d[0];
        //val1 += d[0];
        val2 = val2* 10 + d[1];
        //val2 += d[1];
    }
    val = min (abs(a-val1), abs(a-val2));
    f(i, 0, place-1) {
        val3 = val3 * 10 + d[0];
        //val3 += d[0];
        val4 = val4* 10 + d[1];
        //val4 += d[1];
    }
    val = min (val, min(abs(a-val3), abs(a-val4)));
    cout << val << "\n";
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