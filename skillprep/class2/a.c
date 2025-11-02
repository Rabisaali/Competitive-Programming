#include <stdio.h>
int main () {
    int x;
    scanf("%d", &x);

    int step=0;
    while (x>5) {
        x -= 5;
        step++;
    }
    step ++;
    printf("%d", step);
}