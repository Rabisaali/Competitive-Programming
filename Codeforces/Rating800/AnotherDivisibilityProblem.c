#include <stdio.h>
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int x;
        scanf("%lld", &x);
        long long int y = 2*x;
        printf("%d\n", y);
        t--;
    }
}