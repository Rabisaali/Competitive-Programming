#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        int sum=0;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        if (sum==s) cout << "YES\n";
        else if (sum>s) cout << "NO\n";
        else {
            int ans = s-sum;
            if (ans%x == 0) cout << "YES\n";
            else cout << "NO\n";
        } 
    }
}