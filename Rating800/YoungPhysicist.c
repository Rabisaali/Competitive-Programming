#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    int x,y,z;
    while (n>0) {
        scanf("%d %d %d", &x, &y, &z);
        sumx += x;
        sumy += y;
        sumz += z;
        n--;
    }
    if (sumx==0 && sumy==0 && sumz==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}