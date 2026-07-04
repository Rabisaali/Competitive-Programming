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
        int temp;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        int count=1;
        for (int i=0; i<n; i++) {
            if ((i+1) == n) break;
            
            if (array[i] == array[i+1]) continue;
            
            else count++;
        }
        printf("%d\n", count);
        t--;
    }
}