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
    float a, b, c;
    cin >> a >> b >> c;
    float d = b*b - (4*a*c);
    if (a!=float(0)) {
        if (d<float(0)) {
            cout << "0\n";
            return;
        }
        else {
        //-b+-rt(b2-4ac)/21
            float ans1 = -b + sqrt(d);
            float ans2 = -b - sqrt(d);
            if (ans1==ans2) cout << 1 << "\n" << fixed << setprecision(5)  << float(ans1/(2*a)) << "\n";
            else cout << 2 << "\n" << fixed << setprecision(5) << min(float(ans1/(2*a)), float(ans2/(2*a))) << "\n" << max(float(ans1/(2*a)), float(ans2/(2*a))) << "\n";
        }
    }
    else if (a==float(0) && b!=float(0)) {
        cout << "1\n" << fixed << setprecision(5) << float(-c/b) << "\n";
    }
    else if (a==float(0) && b==float(0) && c!=float(0)) cout << "0\n";
    else cout << "-1\n";
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