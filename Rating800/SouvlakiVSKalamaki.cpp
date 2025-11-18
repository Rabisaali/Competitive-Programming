#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector <int> a(n);
        vector <int> b(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            b[i]=a[i];
        }

        sort(b.begin(), b.end(), greater<int>());
        for(int i=0; i<n; i++) {
            if(b[i]==a[i]) 
        }
        if (b[0]==a[n-1]) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
        t--;
    }
}