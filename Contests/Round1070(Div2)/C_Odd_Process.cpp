#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        LL count = 0;
        vector <LL> a(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]%2==0) count++;
        }
        if (count == n) {
            for (LL i=0; i<n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
            continue;
        }
        sort (a.begin(), a.end(), greater<int>());
        LL odd=0;
        LL i;
        for (i=0; i<n; i++) {
            if (a[i]%2==1) {
                odd = a[i];
                break;
            }
        }
        LL sum=odd;
        cout << a[i] << " ";
        for (LL j=0; j<n; j++) {
            if (j==i) continue;
            else {
                sum+=a[j];
                if (sum%2==0) sum=0;
                cout << sum << " ";
            }
        }
        cout << "\n";
    }
}