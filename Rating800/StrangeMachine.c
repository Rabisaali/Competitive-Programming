#include <stdio.h>
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        int n;
        long long int q;
        scanf("%d %lld", &n, &q);
        char s[n];
        scanf("%s", s);
        while (q>0) {
            long long int a;
            scanf("%lld", &a);
            long long int count = 0;
            int i=0;
            while (a!=0) {
                
                if (s[i] == 'A') {
                    a--;
                }
                else {
                    a/=2;
                }
                count++;
                if (a==0) break;
                if (i+1 == n) {
                    i=0;
                }
                else i++;
                
            }
            printf("%lld\n", count);
            q--;
        }
        t--;
    }
    return 0;
}