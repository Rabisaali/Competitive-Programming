#include <stdio.h>
int main () {
    int q;
    scanf("%d", &q);
    while (q>0) {
        int n;
        int count = 0;
        scanf("%d", &n);
        char s[n], t[n];
        scanf("%s %s", &s, &t);
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (s[i] == t[j]) {
                    count++;
                    t[j] = '0';
                    break;
                }
            }
        }
        if (count == n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        q--;
    }
}