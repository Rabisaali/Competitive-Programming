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
    string s;
    cin >> s;
    int n=s.length();
    // string t="";
    // f(i, 0, n) {
    //     if (t=="" || t.back()!=s[i]) t+=s[i];
    // }
    // //n=t.length();
    // unordered_set<string> u;
    // u.insert(t);
    // f(i, 1, n-1) {
    //     if (s[i-1] == s[i] && s[i] == s[i+1]) continue;
    //     string st=s;
    //     if (st[i]=='0') st[i]='1';
    //     else st[i]='0';
    //     t="";
    //     f(j, 0, n) {
    //         if (t=="" || t.back()!=st[j]) t+=st[j];
    //     }
    //     u.insert(t);
    // }
    uset u;
    int v=0;
    f(i, 1, n) if(s[i]!=s[i-1]) v++;
    u.insert(v);

    f(i, 1, n-1) {
        int v1=0, v2=0, v3=0, v4=0;

        if(s[i]==s[i-1]) v1++;
        else v3++;
        if(s[i]==s[i+1]) v2++;
        else v4++;

        u.insert(v-v1-v2+v3+v4);
    }

    cout << u.size() << "\n";
    
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