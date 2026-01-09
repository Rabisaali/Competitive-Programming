#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        if (n==1) {
            cout << "0\n";
            continue;
        }
        sort(a.begin(), a.end());
        int ans = a[n-1]-a[0];
        cout << ans << "\n";
    }
}