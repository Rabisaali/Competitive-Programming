#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        vector<int>s(11);
        for (int i=0; i<11; i++) {
            scanf("%d", &s[i]);
        }
        vector<int>b(11);
        for (int i=0; i<10; i++) {
            int temp=s[i];
            for (int j=0; j<10; j++) {
                if (s[j]>=10-i && s[j]<temp) {
                    temp=s[j];
                    s[j]=-1;
                }
            }
            b[i]=temp;
        }
        for (int i=0; i<10; i++) {
            printf("%d", b[i]);
        }
        printf("\n");
        t--;
    }
}