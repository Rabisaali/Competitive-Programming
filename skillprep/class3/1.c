#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
 
        long long int a,b,k;
        scanf("%lld %lld %lld", &a, &b, &k);
        long long int count;

        long long int v = k/2;
        if (k%2 == 0) {
            count = v*a - v*b;
        }
        else {
            count = (v+1)*a - v*b;
        }
        printf("%lld\n", count);
        t--;
    }
}