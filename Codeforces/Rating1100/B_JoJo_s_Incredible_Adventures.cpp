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
    string s;
    cin >> s;
    int n=s.length();
    if (n==1) {
        if (s[0]=='0') cout << "0\n";
        else cout << "1\n";
        return;
    }
    // vvi a(2, vector<int>(n));
    // f(i, 0, n) {
    //     a[0][i]=s[i];
    // }
    // f(i, 0, n-1) {
    //     a[1][i+1]=s[i];
    // }
    // a[1][0]=s[n-1];
    // vi area;
    // area.pb(0);
    int count=0;
    f(i, 0, n) {
        int temp=0;
        if(s[i]=='1') {
            temp++;
            while(temp < n && s[(i + 1)%n]=='1') {
                i++;
                temp++;
            }
            count=max(count, temp);
            if (temp==n) {
                cout << n*n << "\n";
                return;
            }
        }
    }
    // f(i, 0, n) {
    //     int temp=0;
    //     if(a[1][i]=='1') {
    //         temp++;
    //         while(i + 1 < n && a[1][i + 1]=='1') {
    //             i++;
    //             temp++;
    //         }
    //         count=max(count, temp);
    //     }
    // }
    // f(i, 0, n) {
    //     int count=0;
    //         while(i<n && a[0][i]==a[1][i] && a[0][i]=='1') {
    //             count+=2;
    //             i++;
    //         }
    //     area.pb(count);
    // }
    cout << ((count+1)/2) * ((count+2)/2) << "\n";
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