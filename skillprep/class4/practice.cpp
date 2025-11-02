#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>alpha(4);
    vector<int>beta = {3, 6, 10, 8};

    for (int i=0; i<4; i++) {
    scanf("%d", &alpha[i]);
    }
    sort(alpha.begin(), alpha.end());
    sort(beta.begin(), beta.end(), greater<int>());

    printf("%d %d", alpha[3], beta[0]);
}





