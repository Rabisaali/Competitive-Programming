#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int result1, min1, max1, max2, min2, result2;
        if (a<b) {
            min1 = a;
            max1 = b;
        } 
        else {
            min1 = b;
            max1 = a;
        }
        if (max1 <= 2*min1 + 2) result1 = 1;
        else result1 = 0;
        
        if (c-a<d-b) {
            min1 = c-a;
            max1 = d-b;
        } 
        else {
            min1 = d-b;
            max1 = c-a;
        }
        if (max1 <= 2*min1 + 2) result2 = 1;
        else result2 = 0;

        if (result1 == 1 && result2 == 1) printf("Yes\n");
        else printf("No\n"); 

        t--;
    }
}