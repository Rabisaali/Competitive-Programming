#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if ((r1==l1) && (r2==l2) && (r2==r1)) cout << r1 << "\n";
        else if (((r1-l1==0) || (r2-l2==0)) && ((r1<l2) || (r2<l1))) cout << r1+l2 << "\n"; 
        else if (abs(l2-l1) < r1 || abs( l2-l1) < r2) cout << max(l1, l2) << "\n";
        else cout << l1+l1 << "\n"; 
    }
}