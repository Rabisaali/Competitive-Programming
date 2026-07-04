#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        int count0=0, count1=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==0) count0++;
            else if (a[i]==1) count1++;
        }
        if (count0 == 0) cout << "NO\n";
        else if (count1>0) cout << "YES\n";
        else {
            if (count0==1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}