#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        // vector<int>a(n);
        // for (int i=0; i<n; i++) cin >> a[i];
        if (h>l) swap (h,l);
        int high=0, low=0;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            if (x <= h) high++;
            if (x <= l) low++;
        }
        cout << min(high, low/2) << "\n";
    }
}