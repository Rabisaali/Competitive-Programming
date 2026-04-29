#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char arr[n][m];
    for( int i=0; i<n; i++){
        scanf("%s", arr[i]);

    }
    int con[(n*n)-n]; int d;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            if(a=!b){
                int count=0;
                for(int c=0; c<n; c++){
                    if(arr[a][c]==arr[b][c]==1) count++;
                }
                con[d]=count;
            }
        }
    }
    int total=0;
    int max=0;
    for(int k=0; k<((n*n)-n); k++){
        if(con[k]>max) max=con[k];
    }

    for(int k=0; k<((n*n)-n); k++){
        if( max==con[k]) total+=1;
    }
    printf("%d\n", max);
    printf("%d", total);
}