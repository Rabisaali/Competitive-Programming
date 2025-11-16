#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        int n;
        long long int q;
        scanf("%d %lld", &n, &q);
        char s[n];
        scanf("%s", s);
        long long int countB=0, countA=0;
        for (int i=0; i<n; i++) {
            if(s[i]=='B') countB++;
            else countA++;
        }
        
        while (q>0) {
            long long int a;
            scanf("%lld", &a);
            long long int count=0;
            if (countA==n) {
                printf("%lld\n", a);
                continue;
            }
            else {
                while (a > 0) {
                    for (int i=0; i<n && a>0; i++) {
                        if (s[i]=='A') {
                            int j=i;
                            while(s[j]=='A' && j<n) {
                                j++;
                            }
                            long long block = j-i;
                            if (a<=block) {
                                count += a;
                                a = 0;
                            }
                            else {
                                count += block;
                                a -= block;
                            }
                            i = j-1;
                        }
                        else {
                            a/=2;
                            count++;
                        }
                    }
                }
                printf("%lld\n", count);
            }
            q--;
        }
        t--;
    }
    return 0;
}