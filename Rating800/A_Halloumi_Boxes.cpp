#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<LL>a(n);
        vector<LL>c(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            c[i]=a[i];
        }
        sort(c.begin(), c.end());
        int count=0;
        for (int i=0; i<n; i++) {
            if (a[i]!=c[i]) {
                count++;
                break;
            }
        }
        if (count > 0 && k==1) cout << "NO\n";
        else cout << "YES\n";
    }
}