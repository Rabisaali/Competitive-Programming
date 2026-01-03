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
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int diff;
        if (a[n-1]>a[n-2]) diff = a[n-1]-a[n-2];
        else if (a[n-1]==a[n-2]) {
            cout << "1\n";
            continue;
        }
        else diff = a[n-2]-a[n-1];
        if (diff==1) {
            cout << "0\n";
            continue;
        }
        else {
            diff = diff - (diff/2);
            cout << diff <<"\n";
        }

    }
}