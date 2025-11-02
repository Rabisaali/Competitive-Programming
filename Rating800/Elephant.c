#include <stdio.h>
int main () {
    int x;
    int count = 0;
    scanf("%d", &x);
        
    count=x/5;
    x%=5;

    if (x>0) count++;
    printf("%d", count);
}