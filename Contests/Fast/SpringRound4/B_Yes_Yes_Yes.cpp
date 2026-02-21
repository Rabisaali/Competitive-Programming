#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        char s[50];
        cin >> s;
        int flag=0;
        int len = strlen(s);
        for (int i=0; i<len; i++) {
            if (s[i]!='Y' && s[i]!='e' && s[i]!='s') {
                flag=1;
                break;
            }
        }
        if(flag==1) cout << "NO\n";
        else {
            if (strstr(s, "YES")!=NULL || strstr(s, "Yess")!=NULL || strstr(s, "se")!=NULL) cout << "NO\n";
            else if (strstr(s, "esY")!=NULL || strstr(s, "YesYes") !=NULL || strstr(s, "sYes")!=NULL || strstr(s, "e")!=NULL || strstr(s, "sY")!=NULL) cout << "YES\n";    
            else cout << "NO\n";
        }
        
    }
}