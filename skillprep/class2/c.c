#include <stdio.h>
int main () {
    int T;
    scanf("%d", &T);
    while (T>0) {
        int N, X;
        scanf("%d %d", &N, &X);
        int count = N/(3*X);
        printf("%d\n", count);
        T--;
    }
}