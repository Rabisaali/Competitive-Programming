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
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi b(m);
    int sumb=0, suma=0;
    inputv (a);
    inputv(b);  
    
    fn(i, n-1, 0) {
        if(i==n-1) suma+=a[i];
        else suma+= (a[i]-a[i+1]+1);
    }
    fn(i, m-1, 0) {
        if(i==m-1) sumb+=b[i];
        else sumb+= (b[i]-b[i+1]+1);
    }

    if (suma>=sumb) cout << "1\n";
    else cout << "2\n"; 
    
    // int i=0;
    // int pn=0, pm=0;
    // while(a[n-1]!=0 && b[m-1]!=0) {
    //     if (i%2==0) {
    //         b[pm]-=1;
    //     }
    //     else {
    //         a[pn]-=1;
    //     }
    //     if (pm==m-1 && b[pm]==0) break;
    //     else if (pm+1<m && b[pm]<b[pm+1]) pm++; 
    //     if (pn==n-1 && a[pn]==0) break;
    //     else if (pn+1<n && a[pn]<a[pn+1]) pn++; 
    //     i++;
    // }
    // if (b[m-1]==0) cout << "1\n";
    // else cout << "2\n";


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