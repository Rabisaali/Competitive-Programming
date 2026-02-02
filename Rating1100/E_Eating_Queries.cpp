#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n, q;
        cin >> n >> q;
        vector<LL>a(n), p(n);
        LL sum=0;
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            
        }
        sort(a.begin(), a.end(), greater<LL>());
        for (LL i=0; i<n; i++) {
            sum+=a[i];
            p[i]=sum;
        }
        while(q--) {
            LL x;
            cin >> x;
            if (x>sum) {
                cout << "-1\n";
                continue;
            }
            LL count=lower_bound(p.begin(), p.end(), x)-p.begin();
            cout << count+1 << "\n";
        }
    }
}