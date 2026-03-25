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
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);int t = 1;
void solve () {
    // string a;
    // cin >> a;
    // //int flag = 0;
    // int len = a.length();
    // bool flag0=false, flag5=false, abort0=false, abort5=false;
    // int count0=0, count5=0;
    // fn(i, len-1, 0) {
    //     if (flag0 == false || flag5 == false) {
    //         if (a[i]=='0') flag0=true;
    //         else if (a[i]=='5') flag5=true;
    //     }
    //     if (flag0 == true && abort0 == false) {
    //         if (a[i]=='0' || a[i]=='5') {
    //             abort0 = true;
    //             continue;
    //         }
    //         count0++;
    //     }
    //     if (flag5==true && abort5 == false) {
    //         if (a[i]=='7' || a[i]=='2') {
    //             abort5 = true;
    //             continue;
    //         }
    //         count5++;
    //     }
    // }
    // if (abort0 == false) cout << count5 << "\n";
    // else if (abort5 == false) cout << count0 << "\n";
    // else if (abort0 && abort5) cout << min(count0, count5) << "\n";
    string a;
    cin >> a;
    int len = a.length();
    bool flag0=false, flag5=false, abort0=false, abort5=false;
    int count0=1e9, count5=1e9;

    fn(i, len-1, 0) {
        if (flag0==false && a[i]=='0') {
            flag0 = true;
            fn(j, i-1, 0) {
                if (a[j]=='0' || a[j]=='5') {
                    abort0 = true;
                    count0 = (len-1 - i) + (i-1 - j);
                    break;
                }
            }
        }

        if (flag5==false && a[i]=='5') {
            flag5 = true;
           
            fn(j, i-1, 0) {
                if (a[j]=='2' || a[j]=='7') {
                    abort5 = true;
                    count5 = (len-1 - i) + (i-1 - j);
                    break;
                }
            }
        }
    }

    int ans=1e9;
    if (abort0) ans = min(ans, count0);
    if (abort5) ans = min(ans, count5);

    //if (ans == 1e9) cout << -1 << "\n"; // not possible
    cout << ans << "\n";
}
signed main () {
    fastnuces;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}