#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t>0) {
	    int D;
	    scanf("%d", &D);
	    char n[D+1];
	    scanf(" %s", n);
	    int count=0;
	    for (int i=0; i<D; i++) {
	        if (n[i]=='0' || n[i]=='5') {
	            count=1;
	            break;
	        }
	    }
	    if (count==1) printf("yes\n");
	    else printf("no\n");
	    t--;
	}
    return 0;
}