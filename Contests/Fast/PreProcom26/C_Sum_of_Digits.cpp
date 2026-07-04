#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        LL ans=0;
        while (n>0) {
            ans+=n%10;
            n/=10;
        }
        cout << ans << "\n";
    }
}