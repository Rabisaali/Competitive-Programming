#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int ans;
        if (c%2 != 0) {
            ans = (c+1)/2;
        }
        else {
            ans=c/2;
        }
        if (a==b) {
            if (c%2 != 0) {
                cout << "First\n";
                continue;
            }
            else {
                cout << "Second\n";
                continue;
            }
        }
        else if (a+ans < b+ans) cout << "Second\n";
        else cout << "First\n";
    }
}