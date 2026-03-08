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
#define vpi vector<pair<int,char>>
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
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve () {
    int n;
    cin >> n;
    vector<pair<int, char>>a(n);
    f(i, 0, n) {
        int first;
        char second;
        cin >> first >> second;
        a[i] = {first, second};
    }
    //for (int i=0; i<n; i++) cout << a[i].first << " " << a[i].second << "\n";
    sa(a);
    int count = 0;
    f(i, 0, n) {
        if (a[i].first == 0) continue;
        int val = a[i].first;
        for(int j=i+1; j<n && a[j].first == val; j++) {
            if (a[j].second != a[i].second) {
                count++;
                a[i].first = 0;
                a[j].first = 0;
                break;
            }
        } 
    }
    cout << count << "\n";

}
signed main () {
    fastnuces;
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    //}
    return 0;
}