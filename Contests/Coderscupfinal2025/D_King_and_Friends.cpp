#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x==2*y) cout << y << "\n";
        else if(x>y) cout << x-y << "\n";
        else cout << "0\n";
    }
}