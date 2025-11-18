#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> score(3);
    for (int i=0; i<3; i++) {
        scanf("%d", &score[i]);
    }
    sort (score.begin(), score.end());
    if (score[2]-score[0] >= 10) printf("check again\n");
    else printf ("final %d", score[1]);
}