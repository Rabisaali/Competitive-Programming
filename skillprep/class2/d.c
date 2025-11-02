#include <stdio.h>
int main () {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    if (k <= (n+1ll)/2ll) {
        printf("%lld", k*2-1);
    }
    else if (k>n/2) {
        printf("%lld", ((k-((n+1ll)/2ll))*2 ));
    }
}