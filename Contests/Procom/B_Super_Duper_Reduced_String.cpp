#include <iostream>
#include <string>
#define LL long long
using namespace std;
int main () {
    string s;
    cin >> s;
    string g="";
    int len = s.length();
    for (int i=1; i<len; i++) {
        if (s[i]==s[i-1]) {

            
           for(int j=0; j<len; j++){
            if(j+2==len) break;
            else   {
                    s[j]=s[j+2];
            } 
                    len-=2;

           }
           
    //    }
    }
    
    if(len==0)cout<<"Empty String";
    else{
        for(int k=0; k<len; k++){
            cout<<s[k];
        }
    }
   // int j=0;
    /*for (int i=1; i<len; i++){
        if (s[i]=='0') {
           //j++;
            continue;
        }
        else g.push_back(s[i]);
    }
    if (g=="") cout << "Empty String\n";
    else cout << g << "\n";*/
}