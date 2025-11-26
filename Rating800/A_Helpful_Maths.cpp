#include <bits/stdc++.h>
using namespace std;
int main () {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    vector <int> arr((len+1)/2);
    for (int i=0; i<len; i+=2) {
        if (s[i]=='1' || s[i]=='2' || s[i]=='3') {
            arr[i/2] = s[i]-'0';
        }
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<(len+1)/2; i++) {
        if (i==0) printf("%d", arr[i]);
        else printf("+%d", arr[i]);
    }
}