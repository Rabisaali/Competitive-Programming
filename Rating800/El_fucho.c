#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    
    while (t>0) {
        int n;
        scanf("%d", &n);
        int winner = n;
        int loser = 0;
        int count=0;
        while ((winner >= 2) || (loser >= 2)) {
            if (loser >= 1) {
                count += (loser/2);  
                loser -= (loser/2); 
                 
            }
            if (winner >= 1) {
                count += (winner/2);
                loser += (winner/2);
                winner -= (winner/2); 
            }
            
        }
        count ++;
        printf("%d\n", count);
        t--;
    }  
}