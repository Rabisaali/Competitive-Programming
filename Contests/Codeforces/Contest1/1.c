#include <stdio.h>
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if ((a==b) && (a==c) && (b==d)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        t--;
    }
}