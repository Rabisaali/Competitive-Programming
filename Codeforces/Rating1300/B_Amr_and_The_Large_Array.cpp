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
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// void solve () {
    
// }
signed main () {
    fastnuces;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    int n;
    cin >> n;
    vi a(n);
    mp freq;
    unordered_map<int,int> first, last;
    int maxind=0;
    f(i, 0, n) {
        cin >> a[i];
        if (!first.count(a[i])) first[a[i]] = i;
        last[a[i]] = i;
        freq[a[i]]++;
        if (freq[a[i]]>maxind) maxind=freq[a[i]];
    }
    int index2=n, index1=0;
    // vi b(n);
    // int temp=n-1;
    // f(i, 0, n) {
    //     b[i] = a[temp--];
    // }
    // for (auto x: freq) {
    //     cout << x.first << " " << x.second << " ";
    // }
    //cout << nl
    for (auto &x: freq) {
        if (x.second == maxind) {
            int val = x.first;
            int l = first[val];
            int r = last[val];
            if (index2-index1 > r-l) {
                index1 = l;
                index2 = r;
            }
            else if (index2-index1 == r-l && l < index1) {
                index1 = l;
                index2 = r;
            }
        }
    }
    //int maxval = *max_element(all(a));
    
    cout << index1+1 << " " << index2+1 << "\n";
 
 
    return 0;
}