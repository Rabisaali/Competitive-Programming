#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL l, r;
        cin >> l >> r;
        LL x = l;
        LL y = 2*l;
        if (y>r) cout << "-1 -1\n";
        else cout << x << " " << y << "\n";    
    }
}