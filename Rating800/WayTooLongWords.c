#include <stdio.h>
#include <string.h>

int main () {
    int n;
    scanf("%d", &n);

    while (n>0) {
        char arr[100];
        scanf("%s", arr);
        int len = strlen(arr);

        if (len>10) {
            printf("%c%d%c\n", arr[0],len-2, arr[len-1]);
        }
        else {
            printf("%s\n", arr); 
        }
        n--;
    } 
    return 0;
}