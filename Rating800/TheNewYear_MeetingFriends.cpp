#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>x(3);
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    sort(x.begin(), x.end());
    printf("%d", x[2]-x[0]);
}