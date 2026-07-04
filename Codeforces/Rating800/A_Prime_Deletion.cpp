#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int flag1=0, flag3=0;
        for (int i=0; i<9; i++) {
            if (s[i]=='1') {
                flag1 = 1;
                break;
            }
            else if (s[i]=='3') {
                flag3 = 1;
                break;
            }
        }
        if (flag1==1) cout << "13\n";
        else cout << "31\n";
    }
}