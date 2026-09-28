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
    int n, x, s;
    cin >> n >> x >> s;
    vc u(n);
    // int i_rem=0, i_total=0;
    // int seats=0;
    //int Ic=0, Ac=0, Ec=0;
    f(i, 0, n) {
        cin >> u[i];
        // if (u[i]=='I') Ic++;
        // else if (u[i]=='A') Ac++;
        // else Ec++;
        //i_total++;
    }
    //cin >> u;
    // i_rem=i_total;
    // int ans=0;
    // vi v(x, 0);
    // f(i, 0, n) {
    //     if (u[i]=='E') {
    //         f(j, 0, x) {
    //             if (v[j]!=0 && v[j]<s) {
    //                 v[j]++;
    //                 ans++;
    //                 break;
    //             }
    //         }
    //     }
    //     else if (u[i]=='I') {
    //         f(j, 0, x) {
    //             if(v[j]==0) {
    //                 ans++;
    //                 seats++;
    //                 v[j]++;
    //                 break;
    //             }
    //         }
    //         i_rem--;
    //     }
    //     else {
    //         f(j, 0, x) {
    //             if (i_rem<=x-seats) {
    //                 int temp=j;
    //                 while(temp<x && v[temp]==0) temp++;
    //                 if (temp<x && v[temp]!=0 && v[temp]<s) {
    //                     ans++;
    //                     v[temp]++;
    //                     //seats++;
    //                     break;
    //                 }
    //                 else if (v[j]==0) {
    //                     //if (v[j]!=0 && v[j]<s) {
    //                         ans++;
    //                         v[j]++;
    //                         seats++;
    //                         break;
    //                     //}
                        
    //                 }
                    
    //             }
    //             else if (v[j]==0) {
    //                 ans++;
    //                 v[j]++;
    //                 seats++;
    //                 break;
    //             }    
    //         }
    //     }
    // }
    // cout << ans << "\n";

    //int temp=Ac;
    int count=0;
    // if (x<=Ic) {
    //     count += min(x, Ic);
    // }
    // else {
    //     if (Ac>=(x-Ic)) {
    //         count+=x;
    //         Ac-=(x-Ic);
    //     }
    //     else {
    //         count+=(x-Ic)+Ac;
    //         Ac=0;
    //     }
    // }

    // vi v(x);
    // int j=0;
    // f(i, 0, count) v[i]=1;
    // f(i, 0, n) {
    //     if (j<x) {
    //         if(u[i]=='E') {
    //             if (v[j]<s) {
    //                 v[j]++;
    //                 count++;
    //             }
    //             else {
    //                 j++;
    //                 if (j < x) {
    //                     v[j]++;
    //                     count++;
    //                 }
    //             }
    //         }
    //         else if (u[i]=='A') {
    //             if (temp>=Ac) temp--;
    //             else if(v[j]<s) {
    //                 v[j]++;
    //                 count++;
    //             }
    //             else {
    //                 j++;
    //                 if (j < x) {
    //                     v[j]++;
    //                     count++;
    //                 }
    //             }
    //         }
    //     }
    //     else break;
    // }
    // int tables=0;

    // vi v(x, 0);

    // f(i, 0, n) {
    //     if (u[i]=='I') {
    //         if (tables<x) {
    //             v[tables]=1;
    //             tables++;
    //             count++;
    //         }
    //     }

    //     else if (u[i]=='E') {
    //         f(j, 0, tables) {
    //             if(v[j]<s) {
    //                 v[j]++;
    //                 count++;
    //                 break;
    //             }
    //         }
    //     }
    //     else {
    //         int fut=0;
    //         f(k, i+1, n) if(u[k]=='I') fut++;

    //         if (fut>=x-tables) {
    //             bool flag=false;

    //             f(j, 0, tables) {
    //                 if(v[j]<s) {
    //                     v[j]++;
    //                     count++;
    //                     flag=true;
    //                     break;
    //                 }
    //             }
    //             if(!flag && tables<x) {
    //                 v[tables]=1;
    //                 tables++;
    //                 count++;
    //             }
    //         }
    //         else {
    //             if(tables<x) {
    //                 v[tables]=1;
    //                 tables++;
    //                 count++;
    //             }
    //             else {
    //                 f(j, 0, tables) {
    //                     if(v[j]<s) {
    //                         v[j]++;
    //                         count++;
    //                         break;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }

    int seat=0;
    int rem_tab=x;
    int a=0;

    f(i, 0, n) {
        if (u[i]=='I') {
            if(rem_tab>0) {
                rem_tab--;
                seat += (s-1);
                count++;
            }
        }
        else if (u[i]=='E') {
            if (seat>0) {
                seat--;
                count++;
            }
            else if (a>0 && rem_tab>0) {
                a--;
                rem_tab--;
                count++;
                seat+=s-1;
            }
        }
        else {
            if (seat>0) {
                seat--;
                count++;
                a++;
            }
            else if(rem_tab>0) {
                rem_tab--;
                seat+=s-1;
                count++;
            }
        }
    }
    cout << count << "\n";
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