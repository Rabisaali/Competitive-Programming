#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL solve (LL n) {
    LL mod = 1e9+7;
    vector<LL>arr(n+1);
    arr[0]=1;
    for (LL i=1; i<n+1; i++) {
        for (LL j=1; j<=6 && j<=i; j++) {
            arr[i]=(arr[i]+arr[i-j])%mod;
        }
    }
    
    return arr[n];
}
int main () {
    LL n;
    cin >> n;
    cout << solve(n) << "\n";
}