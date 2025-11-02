#include <stdio.h>
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        long long int arr[n];
        int i=0;
        while (i<n) {
            scanf("%lld", &arr[i]);
            i++;
            //n--;
        }
        long long int temp[n];
        for (int j=0; j<n; j++) {
            if (j+1 == n) continue;
            if ((arr[j]%2) != arr[j+1]%2) {
                temp[j+1] = arr[j];
                temp[j] = arr[j+1];
            }
        }
        for (int j=0; j<n; j++) {
            printf("%lld", temp[j]);
        }
        printf("\n");
        t--;
    }
}