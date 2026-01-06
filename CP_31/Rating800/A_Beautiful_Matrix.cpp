#include <bits/stdc++.h>
using namespace std;
int main () {
    int arr[5][5];
    int row,col;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j]==1) {
                row=i; 
                col=j;
            }
        }
    }
    int final;
    if (row<2) final=2-row;
    else final=row-2;
    if (col<2) final+=2-col;
    else final+=col-2;

    printf("%d\n", final);
}