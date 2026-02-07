#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << '\n';
            continue;
        }

        int ans = -1;
        for (int i = 0; i <= 31; i++) {
            LL p = 1LL << i;           
            LL a = n / p;                 
            LL r = n % p;                 

            if (k == a) {                       
                break;
            }
            if (k == a + 1 && r > 0) {          
                ans = i;
                break;
            }
        }

        cout << ans << '\n';
    }

}