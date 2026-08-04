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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len=1;
    string t="";
    t+=s[0];
    vi count;
    count.pb(1);
    f(i, 0, n-1) {
        if (s[i]!=s[i+1]) {
            len++;
            t+=s[i+1];
            count.pb(1);
        }
        else {
            count[t.length()-1]++;
        }
    }
    int ans = 0;
    bool spotc1=false;
    bool spotst=false;
    f(i, 1, len-1) {
        //int temp=len;
        // int temp = (t[i-1]!=t[i])+(t[i]!=t[i+1])-(t[i-1]!=t[i+1]);
        // ans = min(ans, temp);
    // agar count[i]==1 ... agar count[i-1] or count[i+1] are equal phir collapsed string ki len = 1
        if (count[i]==1) {
            spotc1=true;
            if(t[i-1] == t[i+1]) spotst=true;
            //temp-=2;
        }

    // if its not 1 then collapsed string ki len same hi rahai gi?
    }
    if (spotst) len-=2;
    else if (spotc1) len-=1;
    cout << len << "\n";

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