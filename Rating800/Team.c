#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int x, y, z;
    int sum;
    int count=0;
    while (n>0) {
        scanf("%d %d %d", &x, &y, &z);
        sum = x+y+z;
        if (sum >=2) {
            count++;
        }
        n--;
    }
    printf("%d", count);
}