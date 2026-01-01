#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map <int, int> a;
        int flag=0;
        int k = n/2;
        for (int i=1; i<=n; i++) {
            int x;
            cin >> x;
            a[x]++;
            if (a[x] == k) flag=1;
            else flag=0;
        }
        if (a.size() >= 3) cout << "No\n";
        else if (a.size() == 1) cout << "Yes\n";
        else {
            if (abs(a.begin()->second - a.rbegin()->second) <= 1) cout << "Yes\n";
            else cout << "No\n";
        } 
        
    }
}