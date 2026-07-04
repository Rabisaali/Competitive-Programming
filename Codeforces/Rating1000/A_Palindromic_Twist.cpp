#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag=0;
        int mid = n/2 - 1;
        for (int i=0; i<mid; i++) {
            if (s[i]==s[n-1-i] || abs((s[i]-'a')-(s[n-1-i]-'a'))==2) continue;
            else {
                flag=1;
                break;
            }
        }
        if (flag==1) cout << "NO\n";
        else {
            if (abs(s[mid]-s[mid+1])==2 || s[mid]==s[mid+1]) cout << "YES\n";
            else cout << "NO\n";
        }

    }
}