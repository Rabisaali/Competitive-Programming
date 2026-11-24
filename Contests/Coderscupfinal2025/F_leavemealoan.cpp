#include <stdio.h>
#include <math.h>
int main () {
    long long int n;
    scanf("%lld", &n);
    long long int s=2;
    long long int i=1;
    while (s<n) {
        s=pow(2, i);
        i++;
    }
    printf("%lld\n", s);
}