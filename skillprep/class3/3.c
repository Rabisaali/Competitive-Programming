#include <stdio.h>
int main () {
    int year;
    scanf("%d", &year);
    int d0, d1, d2, d3;
    do {
        year++;
        int temp = year;
        d0 = temp/1000;
        temp%=1000;
        d1 = temp/100;
        temp%=100;
        d2 = temp/10;
        temp%=10;
        d3 = temp;
    } while ((d0==d1) || (d1==d2) || (d2==d3) || (d3==d0) || (d3==d1) || (d2==d0)) ;
    printf("%d", year);
    
}