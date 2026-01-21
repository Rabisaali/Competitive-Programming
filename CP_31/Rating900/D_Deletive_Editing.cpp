#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        int len1 = s.length();
        int len2 = t.length();
        vector<int>freq(26, 0);
        int flag=0;
        for (int i=0; i<len2; i++) {
            freq[t[i]-'A']++;
        }
        for (int i=len1-1; i>=0; i--) {
            if (freq[s[i]-'A']>0) freq[s[i]-'A']--;
            else s[i]='.';
        }
        string final="";
        for (int i=0; i<len1; i++) {
            if (s[i]!='.') final+=s[i];
        }
        if (final==t) cout << "YES\n";
        else cout << "NO\n";
    }
}
