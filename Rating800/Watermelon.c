#include <stdio.h>
int main () {
    int w;
    scanf("%d", &w);
    if (w==2) 
        printf("No");
    else if (w%2==0) 
        printf("Yes");
    else 
        printf("No");
}