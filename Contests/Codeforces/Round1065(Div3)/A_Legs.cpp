#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        int count = 0;
        if (n%2 != 0) printf("0\n");
        else {
            if (n%4==0) printf("%lld\n", n/4);
            else {
                printf("%lld\n", n/4 + 2);
            }
        }
        t--;
    }
}