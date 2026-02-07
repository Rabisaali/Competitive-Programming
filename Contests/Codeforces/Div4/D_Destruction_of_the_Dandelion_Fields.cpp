#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector <LL> a(n);
        LL count = 0;
        LL times;
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]%2 != 0) count++;
        }
        if (count==0) {
            cout << "0\n";
            continue;
        }
        else {
            times = (count+1)/2; 
        }

        sort(a.begin(), a.end(), greater<>());
        LL sum=0;

        for (LL i=0; i<n; i++) {
            if (a[i]%2 != 0) {
                sum+=a[i];
                times--;
            }
            if (times==0) break;
        }
        for (LL i=0; i<n; i++) {
            if (a[i]%2 == 0) {
                sum+=a[i];
            }
        }
        cout << " " << sum << "\n";
    }
}