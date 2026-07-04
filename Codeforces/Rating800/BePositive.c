#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        int array[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &array[i]);
        }
        int count1=0; 
        int finalcount=0;
        for (int i=0; i<n; i++) {
            if (array[i] == 0) {
                finalcount++;
            }
            else if (array[i] == -1) {
                count1++;
            }
        }
        if ((count1%2) == 0) {
            printf("%d\n", finalcount);
        }
        else {
            printf("%d\n", finalcount+2);
        }
        t--;
    }
}