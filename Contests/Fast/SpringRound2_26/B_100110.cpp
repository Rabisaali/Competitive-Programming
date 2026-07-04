#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x==y) cout << x+y << "\n";
        else if (abs(x-y)==1) cout << x+y << "\n";
        else {
            int val = min(x,y);
            int diff = max(x,y)-min(x,y);
            int ans = 2*val + diff +diff-1;
            cout << ans << "\n";
        }
    }
}