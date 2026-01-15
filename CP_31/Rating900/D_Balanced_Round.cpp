#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n, k;
        cin >> n >> k;
        vector<LL>a(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int count = 0;
        int maximum = 0;
        for (LL i=0; i<n-1; i++) {
            if (a[i+1]-a[i] <= k) count++;
            else count=0;
            if (count>maximum) maximum=count;
        }
        cout << n-maximum-1 << "\n";
    }
}