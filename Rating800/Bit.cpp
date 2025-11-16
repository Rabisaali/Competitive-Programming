#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    scanf("%d", &n);
    int x=0;
    while (n>0) {
        string s;
        cin>>s;
        if (s=="++X") x++;
        else if (s=="X++") x++;
        else if (s=="X--") x--;
        else if (s=="--X") x--;
        n--;
    }
    printf("%d", x);
}