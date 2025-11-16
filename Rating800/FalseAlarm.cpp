#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n, x;
        scanf("%d %d", &n, &x);
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int first_door=0, last_door=0;
        for (int i=0; i<n; i++) {
            if (a[i] == 1 && first_door==0) {
                first_door=i+1;
                last_door=i+1;
            }
            else if (a[i] == 1) last_door=i+1; 
        }
        
        if (last_door - first_door < x) printf("yes\n");
        else printf("no\n"); 
        t--;
    }    
}