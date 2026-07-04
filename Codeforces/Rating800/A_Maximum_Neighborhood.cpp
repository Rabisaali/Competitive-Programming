#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans;
        if (n==1) ans=1;
        else if (n==2) ans=9;
        else if (n==4 || n==3) ans = 4*n*n - n - 4;
        else ans = 5*n*n - 5*n -5;
        cout << ans << "\n";
    }
}