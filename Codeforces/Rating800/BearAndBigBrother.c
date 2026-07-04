#include <stdio.h>
int main () {
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);
    while (a<=b) {
        a *= 3;
        b *= 2;
        count ++;
    }
    printf("%d", count);
}