#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector<LL>a(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            a[i]+=1;
        }
        for(LL i=1; i<n; i++) {
            if (a[i]%a[i-1] == 0) a[i]+=1;
        }
        for (LL i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}