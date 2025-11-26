#include <bits/stdc++.h>
using namespace std;
int main () {
    int k, w;
    long long int n;
    scanf("%d %lld %d", &k, &n, &w);
    long long int count = w*(k+w*k)/2;
    if (count<=n) printf("0\n");
    else {
        long long int final = count-n;
        printf("%lld\n", final);
    }
}