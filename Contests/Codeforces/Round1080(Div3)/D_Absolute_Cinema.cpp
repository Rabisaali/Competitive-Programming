#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<LL> f(n+1);
        for (int i=1; i<=n; i++) cin >> f[i];

        LL S = (f[1] + f[n]) / (n-1);

        vector<LL> prefix(n+1,0), a(n+1,0);
        for (int x=1; x<n; x++) {
            LL d = f[x+1] - f[x];
            prefix[x] = (d + S) / 2;
        }
        a[1] = prefix[1];
        for (int i=2; i<n; i++) {
            a[i] = prefix[i] - prefix[i-1];
        }
        a[n] = S - prefix[n-1];

        for (int i=1; i<=n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}