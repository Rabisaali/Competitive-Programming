#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n); 
        while (n>0) {
            char s;
            int x;
            char q;
            scanf(" %c %d %c", &s, &x, &q);
            int ans;
            if (s==q) ans=x/2;
            else ans = (x+1)/2;
            
            printf("%d\n", ans);
            n--;
        }
        t--;
    }
}