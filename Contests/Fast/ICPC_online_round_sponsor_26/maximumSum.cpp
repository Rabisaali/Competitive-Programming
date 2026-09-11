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

// vvi dp;
// int fun (int n, int k, int i, int sum, int j) {
//     if (k==0) return sum;
//     if (i==n) return 0;
//     if (j==-1) return 0;
//     if (dp[i][j]!=-1) return dp[i][j];
//     // front
//     int m1 = fun(n, k-1, i+1, sum+a[i], j);

//     //back
//     int m2 = fun(n, k-1, i, sum+a[j], j-1);

//     return dp[i][j]=max(m1, m2);


// }
void solve () {
    int n, k;
    cin >> n >> k;
    vi a(n);
    // a.assign(n, 0);
    // dp.assign(n+1, vector<int>(n+1, -1));
    vi sum(n+1);

    f(i, 0, n) {
        cin >> a[i];
        
        sum[i+1]=a[i]+sum[i];
    }
    int s=0;
    int ptr=n-k;
    f(i, 0, k+1) {
        s = max(s, sum[ptr+i]-sum[i]);
    } 
    cout << s << "\n";
//0+2+1 = 3 s[3]->8-5=3 
//s[]
    // 0 5 6 8
    // 6-5, 

    // while(k--) {
    //     if (sum-a[i]>sum-a[j]) {
    //         sum-=a[i];
    //         i++;
    //     }
    //     else {
    //         sum-=a[j];
    //         j--;
    //     }
    // }
    // int x1=0;
    // int x2=0;
    // // f(i, 0, temp) {
    // //     // x1+=a[i];
    // //     // x2+=a[n-i-1];

    // // }
    // f(i, 0, n) {
    //     f(j, 0, temp) {

    //     }
    // }
    // cout << max({sum, temp2-x1, temp2-x2}) << "\n";
    //cout << fun(n, k, 0, 0, n-1) << "\n";
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