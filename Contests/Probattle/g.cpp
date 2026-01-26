#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n,q;
    cin >> n >> q;
    vector<LL>a(n);
    for (LL i=0; i<n; i++) {
        cin >> a[i];
    }
    while (q--) {
        LL l, r;
        LL sum=0;
        cin >> l >> r;
        vector<LL>freq(n+1);
        for (LL i=l; i<=r; i++) {
            freq[a[i]]++;
        }
        for (LL i=1; i<=n; i++) {
            if (freq[i]==0) continue;
            sum+= i*freq[i];
        }
        cout << sum << "\n";
    }
}