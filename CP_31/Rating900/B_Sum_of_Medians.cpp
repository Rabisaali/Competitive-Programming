#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <LL> a(n*k);
        for (int i=0; i<n*k; i++) {
            cin >> a[i];
        }
        int med = n/2;
        LL sum=0;
        int index = 0;
        int i = 0;
        while (index < n*k) {
            sum+=a[k-1+i];
            i+=med;
            index=k+i;
        }
        cout << sum << "\n";
    }
}