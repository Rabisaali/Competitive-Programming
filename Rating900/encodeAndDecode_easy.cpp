#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main () {
    char initial [10];
    scanf("%s", initial);
    if (strcmp(initial, "first") == 0) {
        long long int n;
        scanf("%lld", &n);
        vector<int>word(n);
        for (long long int i=0; i<n; i++) {
            scanf("%d", &word[i]);
        }
        for (long long int i=0; i<n; i++) {
            word[i] = word[i] + 'a' - 1;
        }
        for (long long int i=0; i<n; i++) {
            printf("%c", (char)word[i]);
        }
    }
    else {
        char string[100000];
        scanf("%s", string);
        long long int len = strlen(string);
        printf("%lld\n", len);
        for (long long int i=0; i<len; i++) {
           string[i] = string[i] - 'a' + 1; 
        }
        for (long long int i=0; i<len; i++) {
            printf("%d ", (int)string[i]);
        }
    }
    return 0;
}