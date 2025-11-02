#include <stdio.h>
int main () {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int d, c, r;
    d = (n/2) / (k+1);
    c = k*d;
    r = n-d-c;

    printf("%lld %lld %lld", d, c, r);
}