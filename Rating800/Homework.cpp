#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector<char>a(n);
        for (int i=0; i<n; i++) {
            scanf(" %c", &a[i]);
        }
        int m;
        scanf("%d", &m);
        char b[m], c[m];
        scanf("%s", b);
        scanf("%s", c);
        
        int count[m];
        int counts=0;
        for (int i=0; i<m; i++) {
            count[i]=-1;
        }

        for (int i=0; i<m; i++) {
            if (c[i]=='V') {
                count[counts++]=i;
            }
        }
        char strings[n+m];
        int temp=counts;
        for (int i=0; i<counts; i++) {
            strings[i] = b[count[temp--]];
        }
        int j=0;
        for(int i=counts; i<counts+n; i++) {
            strings[i] = a[j++];
        }
        for(int i=counts+n, k=0; i<m-counts-n; i++, k++) {
            if (c[k]=='D') {
                strings[i] = b[k];
            }
        }
        printf("%s\n", strings);
        t--;
    }
} 