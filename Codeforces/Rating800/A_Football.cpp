#include <bits/stdc++.h>
using namespace std;
int main () {
    char arr[101];
    scanf("%s", arr);
    int len = strlen(arr);
    int count1=1;
    for (int i=1; i<len; i++) {
        if(arr[i]==arr[i-1]) count1++;
        else if(arr[i]==arr[i-1]) count1++;
        else if (arr[i]!=arr[i-1]) {
            count1=1;
        }
        if(count1 == 7) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}