#include<stdio.h>
int main () {
    int n, m;
    int min;
    scanf("%d %d", &n, &m);
    if (n<m) 
        min=n;
    else
        min=m;

    for(int i=min; i>0; i--) {
        if ((n%i)==0 && (m%i)==0){
            printf("%d", i);
            return 0;
        }
    }
    printf("1");
    return 0;
}