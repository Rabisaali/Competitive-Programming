#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y+=1;
        }
        else if(s[i]=='D'){
            y-=1;
        }
        else if(s[i]=='L'){
            x-=1;
        }
        else if(s[i]=='R'){
            x+=1;
        }
    }
    if((x==0 && (y==(2)||y==-2)) || (y==0 && (x==2 || x==-2)))cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}