#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        int array[50];
        for (int i=1, a=0 ; i<100; i+=2, a++) {
            array[a] = i*i;
        }
        int sum=0;
        int count=0;
        for (int i=0; i<n; i++) {
            sum+=arr[i];
            for (int i=0; i<100; i++) {
                if (sum == array[i]) {
                    count++;
                    break;
                }
                else if (sum<array[i]) break;
            }
        }
        printf("%d\n", count);
        t--;
    }
}