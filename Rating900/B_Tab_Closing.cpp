#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL a, b, n;
        cin >> a >> b >> n;
        if (n*b <= a || b==a) cout << "1\n";
        else cout << "2\n";
    }
}