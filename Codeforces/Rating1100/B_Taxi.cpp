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
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve () {
    int n;
    cin >> n;
    vi a(n);
    vi freq(5, 0);
    f(i, 0, n) {
        cin >> a[i];
        freq[a[i]]++;
    }
    int count=0;
    count+=freq[4];
    if (freq[3]>=freq[1]) {
        count+=freq[3];
        freq[1]=0;
    }
    else if (freq[3]<freq[1]) {
        count+=freq[3];
        freq[1]-=freq[3];
    }
    if (freq[2]%2 == 0) {
        count+= (freq[2]/2);
        if (freq[1]>0 && freq[1]<=4) count++;
        if (freq[1]>0 && freq[1]>4) {
            if (freq[1]%4==0) count+=(freq[1]/4);
            else count+=((freq[1]/4)+1);
        } 
    }
    else {
        count+=(freq[2]/2);
        count++;
        freq[1]-=2;
        if (freq[1]>0 && freq[1]<=4) count++;
        if (freq[1]>0 && freq[1]>4) {
            if (freq[1]%4==0) count+=(freq[1]/4);
            else count+=((freq[1]/4)+1);
        } 
    }
    cout << count << "\n";
}

signed main () {
    fastnuces;
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}