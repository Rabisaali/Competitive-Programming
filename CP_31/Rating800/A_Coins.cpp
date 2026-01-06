#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n, k;
        cin >> n >> k;
        
        if ((n%k) == 0)  cout << "YES\n";
        else if (n%2 == 0) cout << "YES\n";
        else {
            if ((n-k)%2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }

    }
}