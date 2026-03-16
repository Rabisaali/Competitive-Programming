 //Bismillah
 #include <bits/stdc++.h>
 using namespace std;
 
 #define int long long
 
 #define vi vector<int>
 
 #define f(i,s,e) for(int i=s;i<e;i++)
 #define inputv(vec) for(auto &value: vec) cin>>value;
 #define sa(vec) sort(vec.begin(), vec.end())
 #define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 signed main () {
     fastnuces;
     int n, m;
     cin >> n >> m;
     multiset<int> h;
     f(i, 0, n) {
        int val; cin >> val;
        h.insert(val);
     }
     f(i, 0, m) {
        int x;
        cin >> x;

        auto index = h.lower_bound(x);
        if (*index==x) {
            cout << *index << "\n";
            h.erase(index);
        }
        else if (index!=h.begin()) {
            index--;
            cout << *index << "\n";
            h.erase(index);
        }
        else cout << "-1" << "\n";
        
     }
     return 0;
 }