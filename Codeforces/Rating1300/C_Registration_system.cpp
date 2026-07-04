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
    int n;
    cin >> n;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    unordered_map<string, int>a;
    f(i, 0, n) {
        string x;
        cin >> x;
        if (a.find(x) == a.end()) {
            a.insert({x, 1});
            cout << "OK\n";
        }
        else {
            string s = x;
            s += to_string(a[x]);
            cout << s << "\n";
            a[x]++;
        }


    }
    //vector<string>b;
    // f(i, 0, n) {
    //     if (find(all(b), a[i]) == b.end()) {
    //         cout << "OK\n";
    //         b.push_back(a[i]);
    //     }
    //     else {
    //         int j=0;
    //         string s=a[i];
    //         while(find(all(b), s) != b.end()) {
    //             ++j;
    //             s=a[i]+to_string(j);
    //         }
    //         cout << s << "\n";
    //         b.push_back(s);
    //     }
    // }
    return 0;
}