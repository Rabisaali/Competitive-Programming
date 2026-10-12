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
void solve () {
    int m, s;
    cin >> m >> s;

    if (s>9*m || (s==0 && m>1)) {
        cout << "-1 -1\n";
        return;
    }
    else if (s==0 && m==1) {
        cout << "0 0\n";
        return;
    }
    vi sm(m, 0), l(m, 0); 

    sm[0]=1;
    int temp=s-1;
    fn(i, m-1, 0) {
        if (i==0) temp++;
        if (temp>=9) {
            sm[i]=9;
            temp-=9;
        }
        else {
            sm[i]=temp;
            break;
        }
    }

    f(i, 0, m) {
        if (s>=9) {
            l[i]=9;
            s-=9;
        }
        else {
            l[i]=s;
            break;
        }
    }

    f(i, 0, m) cout << sm[i];
    cout << " ";
    f(i, 0, m) cout << l[i];

}
signed main () {
    fastnuces;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}