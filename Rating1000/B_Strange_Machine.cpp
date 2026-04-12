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
int cycle(vector<char>& a, int x) {
    for(char c: a) {
        if (x==0) break;
        if (c=='A') x-=1;
        else x/=2;
    }
    return x;
}
void solve () {
    int n, q;
    cin >> n >> q;
    vc a(n);
    int countB=0;
    f(i, 0, n) {
        cin >> a[i];
        if (a[i]=='B') countB++;
    }
    while(q--) {
        int steps=0, pos=0;
        int x; cin >> x;
        if (countB==0) {
            cout << x << "\n";
        }
        else {
            while(x>0) {
                if(a[pos]=='A') x-=1;
                else x/=2;
                steps++;
                pos = (pos+1)%n;
            }
            cout << steps << "\n";
        }
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