#include <stdio.h>
int main () {
    int k, n, w;
    int price=0;
    scanf("%d %d %d", &k, &n, &w);
    for (int i=1; i<=w; i++) {
        price += i*k;
    }
    if (price > n) {
        int borrow = price-n;
        printf("%d\n", borrow);
    }
    else {
        printf("0\n");
    }
}