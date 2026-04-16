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

signed main () {
    fastnuces;
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vi a(n), b(n);
    f(i, 0, n) {
        cin >> a[i];
        cin >> b[i];
    }
    vi c(m), d(m);
    f(i, 0, m) {
        cin >> c[i];
        cin >> d[i];
    }
    // vi prec(m), prea(n);
    // prec[0] = c[0];
    // prea[0] = a[0];
    // f(i, 1, n) prea[i] = prea[i-1]+a[i];
    // f(i, 1, m) prec[i] = prec[i-1]+c[i];

    int j=0, i=0;
    int count = 0;
    int k=0;
    int remRoad = a[0], remCar = c[0];
    while(i < n && j < m) {
        int overlap = min(remRoad, remCar);
        count = max(count, d[j]-b[i]);
        remRoad -= overlap;
        remCar -= overlap;
        // int temp=0;
        // if (j<n && i>prea[j]) j++;
        // if (k<m && i>prec[k]) k++;
        // if (j < n && k < m && d[j]>b[k]) temp = d[j]-b[k];
        if (remRoad == 0 && ++i<n) remRoad = a[i];
        if (remCar == 0 && ++j<m) remCar = c[j];
    }
    cout << count << "\n";
    return 0;
}