#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector <int> a(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
        }
        int maxval=0;
        int temp=0;
        for (int i=0; i<n; i++) {
            if (a[i]==0) {
                temp++;
                maxval = max(temp, maxval);
            }
            else temp=0;
        }
        cout << maxval << "\n";
    }
}