#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        vector<int>num(3);
        scanf("%d %d %d", &num[0], &num[1], &num[2]);
        sort(num.begin(), num.end(), greater());
        if (num[0] + num[1] >= 10) printf("Yes\n");
        else printf("No\n");
        t--;
    }
}