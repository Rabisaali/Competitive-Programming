#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    string s;
    cin >> s;
    LL len = s.length();
    LL count=0;;
    for(LL i=0; i<len; i++) {
        if (s[i]=='4' || s[i]=='7') {
            count++;
        }
    }
    // int flag=0;
    // do {
    //     int digit = count%10;
    //     if(digit != 4 || digit != 7) {
    //         flag=1;
    //         break;
    //     }
    //     count/=10;
    // } while(count!=0);
    // if (flag==0) cout << "YES\n";
    // else cout << "NO\n";
    if (count==4 || count == 7) cout << "YES\n";
    else cout << "NO\n";
}