#include <bits/stdc++.h>
using namespace std;
int main () {
    char strings[201];
    scanf("%s", strings);
    int i=0;
    int j=0;
    int length=strlen(strings);
    char str[length];
    while (strings[i]!='\0') {
        // if (i+3==length) break;
        if(strings[i]=='W' && strings[i+1]=='U' && strings[i+2]=='B'){
            if (j==0) {
                i+=3;
                continue;
            }
            else {
                if (str[j-1]!=' ') {
                    str[j]=' ';
                    j++;
                    i+=3;
                    continue;
                }
                else {
                    i+=3;
                    continue;
                }
            }
        }
        else {
            str[j]=strings[i];
            j++;
            i++;
        }
    }
    if (str[j-1]==' ') {
        str[j-1] = '\0';
    }
    else str[j]='\0';
    printf("%s", str);
}