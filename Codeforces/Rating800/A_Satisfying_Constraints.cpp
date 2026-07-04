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
void solve () {
    int n;
    cin >> n;
    vi v1, v2, v3;
    while (n--) {
        int x;
        cin >> x;
        int y;
        cin >> y;
        if (x==1) v1.push_back(y);
        else if (x==2) v2.push_back(y);
        else v3.push_back(y);
    }
    int min_v1 = *max_element(v1.begin(), v1.end());
    int min_v2 = *min_element(v2.begin(), v2.end());

    if (min_v2<min_v1) cout << "0\n";
    else {
        int count = min_v2-min_v1+1;
        int len = v3.size();
        f(i, 0, len) {
            if (v3[i] <= min_v2 && v3[i] >= min_v1) count--;
        }
        cout << count << "\n";
    }
}
signed main () {
    fastnuces;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}