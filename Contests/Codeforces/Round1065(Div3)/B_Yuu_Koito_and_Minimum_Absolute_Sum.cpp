#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }
       
        for (long long int i=1; i<n-1; i++) {
            if (a[i]==-1) a[i]=0;
        }
        if( (a[0]==-1)&& a[0]!=a[n-1]) a[0]=a[n-1];
        else if ( a[n-1]==-1 && a[0]!=a[n-1]) a[n-1]=a[0];
        else if (a[n-1]==-1 && a[0]==-1) {
            a[n-1]=0;
            a[0]=0;
        }

        long long int b[n];
        for (long long int i=0; i<n; i++) {
            if(i+1==n) break;
            else {
                b[i]=a[i+1]-a[i];
            }
        }
         long long int sum=0;
        for (long long int i=0; i<n-1; i++) {
            sum+=b[i];
        }
        if (sum<0) printf("%lld\n", -1*sum);
        else printf("%lld\n", sum);

        for (long long int i=0; i<n; i++){
            printf("%lld ", a[i]);
        }
        printf("\n");
        t--;
    }
}