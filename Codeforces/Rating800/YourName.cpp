#include <bits/stdc++.h>
using namespace std;
int main () {
    int q;
    scanf("%d", &q);
    while (q>0) {
        int n;
        scanf("%d", &n);
        string s, t;
         cin>> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s==t) printf("yes\n");
        else printf("no\n");
        q--;
    }
    return 0;
}