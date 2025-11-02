#include <stdio.h>
int main () {
    int times;
    scanf("%d", &times);
    int x,y,z;
    int sumx=0, sumy=0, sumz=0;
    for (int i=1; i<=times; i++) {
        scanf("%d %d %d", &x, &y, &z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}