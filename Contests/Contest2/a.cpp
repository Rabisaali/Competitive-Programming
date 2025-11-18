#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int count = 0;
        for (int i=0; i<n-1; i++) {
            if (s[i] != s[n-1]) count++;
        }
        printf("%d\n", count);
        t--;
    }
}