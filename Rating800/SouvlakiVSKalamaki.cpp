#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        sort(a.begin(), a.end());
        int flag=0;
        for(int i=1; i<n; i+=2) {
            if (i+1 == n) break;
            if(a[i]!=a[i+1]) {
                flag++;
                printf("NO\n");
                break;
            }
        }
        if (flag==0) printf("YES\n");
        t--;
    }
}