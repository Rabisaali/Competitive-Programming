#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {   
        int n;
        scanf("%d", &n);
        if (n%3 == 0) {
            printf("0\n");
        }
        else {
            for (int i=1; i<=3; i++) {
                n += 1;
                if (n % 3 == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        } 
        t--;  
    }
    return 0;
}
    