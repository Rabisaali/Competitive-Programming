#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main () {
    string s;
    cin >> s;
    string g="";
    int len = s.length();
    for (int i=1; i<len; i++) {
        if (s[i]==s[i-1] && (s[i]!='-1')&& (s[i-1]!='-1')) {
            s[i]='-1';
            s[i-1]='-1';                                 
        }
    }
    for (int i=0; i<len; i++) {
        if (s[i]=='-1') continue;
        else g.push_back(s[i]);
    }
    int flag=0;
    
    int leng=g.length();
    do {
        int j=0;
        for (int i=1; i<leng; i++) {
        if (g[i]==g[i-1]) {
            g[i]='-1';
            g[i+1]='-1';
            i++;
        }
        else {
            g[j]=g[i];
            j++;
        }
    }
    } while(g.find(g.begin(), g.end(), '-1')==g.end());
    cout << g << "\n";
}