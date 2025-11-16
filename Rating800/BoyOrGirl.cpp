#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
   
    sort(s.begin(), s.end());
    int count=0;
    int len = s.length();
    for (int i=0; i<len; i++) {
        if (i+1 == len) {
            count++;
            break;
        }    
        if (s[i] != s[i+1]) {
            count++;
        }
        
    }
    if (count%2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}