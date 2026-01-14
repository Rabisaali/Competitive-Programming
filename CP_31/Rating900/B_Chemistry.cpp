#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n, k;
        cin >> n >> k;
        char s[n];
        map<char, int>a;
        for (int i=0; i<n; i++) {
            cin >> s[i];
            a[s[i]]++;
        }
        int count=0;
        for (auto& pair: a) {
            if (pair.second % 2 != 0) count++;
        }
        
            if (count-1 <= k) cout << "YES\n";
            else cout << "NO\n";
    }
}