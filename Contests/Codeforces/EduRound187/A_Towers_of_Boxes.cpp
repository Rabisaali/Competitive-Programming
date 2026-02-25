#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        // if (d<m) cout << n << "\n";
        // else {
        //     int temp = 0;
        //     int count = 0;
        //     while (n--) {
        //         temp+=m;
        //         if (temp>d) {
        //             temp=-m;
        //             count++;
        //         }
        //     }
        //     cout << count+1 << "\n";
        // }
        int h = (d/m) + 1;
        int ans = (n+h-1)/h;
        cout << ans << "\n";
    }
}