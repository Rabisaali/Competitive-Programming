#include <bits/stdc++.h>
using namespace std;
int main () {
    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);
    int n2=n;
    int ans=0;
    while (n>0) {
        int value;
        scanf("%d", &value);
        ans += value;
        n--;
    }
    int final = x*n2 - ans + x;
    printf("%d\n", final);
}