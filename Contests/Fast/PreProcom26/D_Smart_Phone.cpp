#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector<LL>a(n);
    for (LL i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<LL>b(n);
    for(LL i=0; i<n; i++) {
        b[i]=a[i]*(n-i);
    }
    sort(b.begin(), b.end());
    cout << b[n-1] << "\n";
}