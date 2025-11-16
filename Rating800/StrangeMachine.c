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
            long long int temp = a;
            if (n==1) {
                if(s[i]=='A') {
                    count = q;
                }
                else {
                    while (temp>0) {
                        temp/=2;
                        count++;
                    }
                }
                printf("%lld\n", count);
                q--;
                continue;
            }
            while (temp>0) {
                int count=0;
                while (s[i]=='A')  {
                    count++;
                    i++;
                    if (i==n) break;
                }
                if (s[i] == 'A') temp--;
                else temp/=2;
                count++;
                if (temp==0) break;
                i++;
                if (i == n) i=0;
            }
            /*long long int steps=count;
            long long int val;
            if (temp > 0) {

                long long int rem = a-temp;
                if (temp%rem==0) {
                    val=temp/rem;
                    steps+=val*count;
                }
                else {
                    val=temp/rem;
                    steps+=val*count;
                    temp %= rem; 
                    i=0;
                    while (temp != 0) {
                        if (s[i] == 'A') temp--;
                        else temp/=2;
                        steps++;
                        i++;
                        if (i == n) i=0;
                    }
                }
            }*/
            printf("%lld\n", count);
            q--;
        }
        t--;
    }
    return 0;
}