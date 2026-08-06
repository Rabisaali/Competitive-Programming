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
    vi a(n);
    mp freq;
    int maxf=0;
    int v=0;
    // inputv(a);
    // sa(a);
    int sum=0;
    f(i, 0, n) {
        cin >> a[i];
        sum+=a[i];
        freq[a[i]]++;
        if (maxf<freq[a[i]]) {
            maxf=freq[a[i]];
            v=a[i];
        }
    }
    if (n==1) {
        cout << a[0] << "\n";
        return;
    }
    else {
        if (maxf>n-maxf+1) {
            sum -= (v*maxf);
            sum += (v*(n-maxf+2));
            
            cout << sum << "\n";
        }
        else cout << sum << "\n";
    }

    // int i=0, j=n-1;
    // int sum=0;
    // bool spot=false;
    // while(i<=j) {
    //     if(a[i]==a[j] && spot) break;
    //     else {
    //         if (a[i]==a[j]) spot=true;
    //         if (i==j) sum+=a[i];
    //         else {
    //             sum+=a[i++];
    //             sum+=a[j--];
    //         }
    //     }
    // }
    // cout << sum << "\n";
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