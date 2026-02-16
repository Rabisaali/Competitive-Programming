#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    string s, t;
    cin >> s >> t;
    int leng1 = s.length();
    int leng2 = t.length();
    if(leng1!=leng2) {
        cout << "NO\n";
        return 0;
    }

    reverse(t.begin(), t.end());
    bool flag=false;
    for (int i=0; i<leng2; i++) {
        if (s[i]!=t[i]) {
            flag=true;
            break;
        }
    }
    (flag==true? cout << "NO\n" : cout << "YES\n");
}