#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        int count=0;
        int flag=0;
        for (int i=0; i<len; i++) {
            if (s[i]=='Y') count++;
        }
        if (count>1) {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}