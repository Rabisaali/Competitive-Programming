#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l,a,b;
        cin >> l >> a >> b;
        cout << l-gcd(l, b) + a%gcd(l, b) << "\n";
    }
}