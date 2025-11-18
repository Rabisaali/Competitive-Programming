#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector<char>a(n);
        for (int i=0; i<n; i++) {
            scanf(" %c", &a[i]);
        }
        int m;
        scanf("%d", &m);
        char b[m], c[m];
        scanf("%s", b);
        scanf("%s", c);

        char strings[n+m];
        int i = 0;
        for (int j=m-1; j>=0; j--) {
            if (c[j]=='V') {
                strings[i++] = b[j];
            }
        }
        for (int j=0; j<n; j++) {
            strings[i++] = a[j];
        }
        for (int j=0; j<m; j++) {
            if (c[j]=='D') {
                strings[i++] = b[j];
            }
        }

        for (int k=0; k<i; k++) {
            printf("%c", strings[k]);
        }
        printf("\n");
        t--;
    }
} 