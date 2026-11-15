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
    vs a(3);
    cin >> a[0] >> a[1] >> a[2];
    set<char>i;
    set<string>to;
    //int ind=0;
    if ((a[0][0]==a[0][1] && a[0][1]==a[0][2])) i.insert(a[0][1]);
    if((a[1][0]==a[1][1]) && a[1][1]==a[1][2]) i.insert(a[1][2]);
    if (a[2][0]==a[2][1] && a[2][1]==a[2][2]) i.insert(a[2][2]);
    if ((a[0][0]==a[1][0] && a[1][0]==a[2][0])) i.insert(a[1][0]);
    if ((a[0][1]==a[1][1] && a[1][1]==a[2][1])) i.insert(a[1][1]);
    if ((a[0][2]==a[1][2] && a[1][2]==a[2][2])) i.insert(a[1][2]);
    if ((a[0][0]==a[1][1] && a[1][1]==a[2][2])) i.insert(a[1][1]);
    if ((a[2][0]==a[1][1] && a[1][1]==a[0][2])) i.insert(a[0][2]);


    //int tot=0;
    
    if (!(a[0][0]==a[0][1] && a[0][1]==a[0][2]) && (a[0][0]==a[0][1] || a[0][0]==a[0][2] || a[0][1]==a[0][2])) {
        set<char>c;
        c.insert(a[0][1]);
        c.insert(a[0][1]);
        c.insert(a[0][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);

    }
    if(!(a[1][0]==a[1][1] && a[1][1]==a[1][2]) && (a[1][0]==a[1][1] || a[1][0]==a[1][2] || a[1][1]==a[1][2])) {
        set<char>c;
        c.insert(a[1][0]);
        c.insert(a[1][1]);
        c.insert(a[1][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[2][0]==a[2][1] && a[2][1]==a[2][2]) && (a[2][0]==a[2][1] || a[2][0]==a[2][2] || a[2][1]==a[2][2])) {
        set<char>c;
        c.insert(a[2][0]);
        c.insert(a[2][1]);
        c.insert(a[2][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[0][0]==a[1][0] && a[1][0]==a[2][0]) && (a[0][0]==a[1][0] || a[0][0]==a[2][0] || a[1][0]==a[2][0])) {
        set<char>c;
        c.insert(a[0][0]);
        c.insert(a[1][0]);
        c.insert(a[2][0]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[0][1]==a[1][1] && a[1][1]==a[2][1]) && (a[0][1]==a[1][1] || a[0][1]==a[2][1] || a[1][1]==a[2][1])){
        set<char>c;
        c.insert(a[0][1]);
        c.insert(a[1][1]);
        c.insert(a[2][1]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[0][2]==a[1][2] && a[1][2]==a[2][2]) && (a[0][2]==a[1][2] || a[0][2]==a[2][2] || a[1][2]==a[2][2])) {
        set<char>c;
        c.insert(a[0][2]);
        c.insert(a[1][2]);
        c.insert(a[2][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[0][0]==a[1][1] && a[1][1]==a[2][2]) && (a[0][0]==a[1][1] || a[1][1]==a[2][2] || a[0][0]==a[2][2])) {
        set<char>c;
        c.insert(a[0][0]);
        c.insert(a[1][1]);
        c.insert(a[2][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }
    if (!(a[2][0]==a[1][1] && a[1][1]==a[0][2]) && (a[2][0]==a[1][1] || a[2][0]==a[0][2] || a[1][1]==a[0][2])) {
        set<char>c;
        c.insert(a[2][0]);
        c.insert(a[1][1]);
        c.insert(a[0][2]);
        string t="";
        for(auto x: c) t+=x;
        to.insert(t);
    }

    cout << i.size() << "\n" << to.size() << "\n";
}
signed main () {
    fastnuces;
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}