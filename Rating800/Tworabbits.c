#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        long long int x, y, a, b;
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
        int n = - (x-y) / (a+b);
        if (x + n*a == y - n*b) printf("%d\n", n);
        else printf("-1\n");
        t--;
    }
}