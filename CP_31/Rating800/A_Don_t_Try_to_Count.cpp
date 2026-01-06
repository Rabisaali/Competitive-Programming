#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int flag=0;
        if (x.find(s) != string::npos) {
            cout << "0\n";
            continue;
        }
        for (int i=0; i<5; i++) {
            x+=x;
            if (x.find(s) != string::npos) {
                cout << " " << i+1 <<"\n";
                flag=1;
                break;
            }
        }
        if (flag==0) cout << "-1\n";
    }
}