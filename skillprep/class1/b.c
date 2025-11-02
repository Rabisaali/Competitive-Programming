#include <stdio.h>
int main () {
    int x, h;
    scanf("%d  %d", &x, &h);
    int time = (x-4)*24 + h;
    printf("%d", time);

}