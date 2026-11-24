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
void fun(vi& a, int i, int j) {
    f(k, i, j) {
        if (a[k]+a[k+1]<=2) {
            swap(a[k], a[k+1]);
            fun(a, 0, k);
        }
    }
}
void solve () {
    int n;
    cin >> n;
    vi a(n);
    int x=0;
    vi b;
    f(i, 0, n) {
        cin >> a[i];
        if(a[i]==0) x++;
        else b.pb(a[i]);

    }
    f(i, 0, x) cout << "0 ";
    printv(b);
    cout << "\n";
    // int l=0, r=n-1;
    // while(l<=r) {
    //     if(a[l]==2 && a[r]==0) {
    //         swap(a[l], a[r]);
    //         l++;
    //         r--;
    //     }
    //     else {
    //         if(a[l]!=2) l++;
    //         if (a[r]!=0) r--;
    //     }
        
    // }
    // l=0, r=n-1;
    // while(l<=r) {
    //     if(a[l]==1 && a[r]==0) {
    //         swap(a[l], a[r]);
    //         l++;
    //         r--;
    //     }
    //     else {
    //         if(a[l]!=1) l++;
    //         if (a[r]!=0) r--;
    //     }
    // }
    // printv(a);
    // cout << "\n";

    
    // printv(a);
    // cout << "\n";

   
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