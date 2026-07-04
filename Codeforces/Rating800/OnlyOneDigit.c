#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    int x;
    
    while (t>0) {
        scanf("%d", &x);
        int min = x%10;
        while (x>0) {
            if ((x%10) < min) {
                min = x%10;
            }
            x/=10;
        }
        printf("%d\n", min);
        t--;
    }
}