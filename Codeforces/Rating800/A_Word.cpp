#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    string s;
    cin >> s;
    int countu=0, countl=0;
    int len = s.length();
    for (int i=0; i<len; i++) {
        if (s[i]>='a' && s[i]<='z') countl++;
        else countu++;
    }
    if (countu > countl) {
        for (int i=0; i<len; i++) {
            cout << char(toupper(s[i]));
        }
        cout << "\n";
    }
    else {
        for (int i=0; i<len; i++) {
            cout << char(tolower(s[i]));
        }
        cout << "\n";
    }

}