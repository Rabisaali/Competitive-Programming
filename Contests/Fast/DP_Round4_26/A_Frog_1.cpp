#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main () {
    LL n;
    cin >> n;
    vector<LL>a(n);
    for (LL i=0; i<n; i++) cin >> a[i];
    
    vector<LL>v(n);
    v[1]=abs(a[0]-a[1]);
    for (LL i=2; i<n; i++) {
        v[i] = min(v[i-1]+abs(a[i]-a[i-1]), v[i-2]+abs(a[i]-a[i-2]));
    }
    cout << v[n-1] << "\n";
}