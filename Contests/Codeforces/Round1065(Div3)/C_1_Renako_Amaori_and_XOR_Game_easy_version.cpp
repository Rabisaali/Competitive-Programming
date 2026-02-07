#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<int>a(n);
        vector<int>b(n);
        for (long long int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        for (long long int i=0; i<n; i++) {
            scanf("%d", &b[i]);
        }
        int ansA=0, ansM=0;
        for (long long int i=0;i<n; i++){
            if (i+1==n)break;
            if (i%2!=0 && a[i]==0) {
                int temp = a[i];
                a[i]=b[i];
                b[i]=temp;
                 
            }
            if (i%2==0 && b[i]==0) {
                int temp = b[i];
                b[i]=a[i];
                a[i]=temp;    
            }   
        }
        for (long long int i=0; i<n; i++) {
            if (i+1 == n) break;
            ansA=a[i]^a[i+1];
             ansM=b[i]^b[i+1];
        }
        if (ansA>ansM) printf("Ajisai\n");
        else if (ansA<ansM) printf("Mai\n");
        else printf("tie\n");
        t--;
    }
}