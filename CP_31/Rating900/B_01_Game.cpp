#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        int count1=0, count0=0;
        for (int i=0; i<len; i++) {
            if (s[i]=='0') count0++;
            else count1++; 
        }
        int ans = min(count1, count0);

        if (ans%2 == 0) cout << "NET\n";
        else cout << "DA\n";
    }
}