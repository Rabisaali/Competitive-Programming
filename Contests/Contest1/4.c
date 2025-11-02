#include <stdio.h>
int main () {
    long int t;long long int hcf;
    scanf("%ld", &t);
    int flag=0;
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }

        long long int x = 2;
        long long int min;

        for (long long int i=0; i<n; i++) {
            if (x>a[i]) min=a[i];
            else min=x;
            
            for (long long int j=min; j>=1; j--) {
                if (a[i]%j==0 && x%j==0) {
                    hcf = j;
                    if (hcf==1) {
                        printf("%lld\n", a[i]);
                        break;
                    }
                }
            }
            x++;
        }
        if (flag != 0) {
            printf("-1");
        }
        
        t--;
    }
    return 0;
}