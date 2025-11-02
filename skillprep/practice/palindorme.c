#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int temp=0;
    int copy=n;
    while (copy>0) {
        temp*=10;
        temp+=copy%10;
        copy/=10;
    }
    if (n==temp) {
        printf("1");
    }
    else{
        printf("0");
    }
}