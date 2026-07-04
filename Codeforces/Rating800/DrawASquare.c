#include <stdio.h>
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u);
        if (r-l == 0 && u-d == 0 && r == l && u == d && u == r && d == l) printf("Yes\n");
        else printf("No\n");
        t--;
    }
}