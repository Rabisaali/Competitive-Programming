#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int diff = 1e9;
        int sorted=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (i>0) {
                diff = min ((a[i]-a[i-1]), diff);
                if (a[i-1]>a[i]) sorted=1;
            }
        }
        if (sorted == 1) {
            cout << "0\n";
            continue;
        }
        int ans = diff/2 + 1;
        cout << ans << "\n";
    }
}