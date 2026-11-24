#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int count = 0;
        int i=0;
            while (s[i] != '\0') {
                if (s[i] == s[i+1]) {
                count++;
                i++;
                }
                else {
                count++;
                }
                i++;
            }  

        printf("%d\n", count);
        t--;
    }
}