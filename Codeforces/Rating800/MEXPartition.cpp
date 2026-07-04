#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());
        for (int i=0; i<n+1; i++) {
            int flag=0;
            for (int j=0; j<n; j++) {
                if(i==a[j]) flag++;
            }
            if (flag==0) {
                printf("%d\n", i);
                break;
            }
        }
        t--;
    }
}