#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin>>a>>b;
    int count=0;
    int sum=0;
    while(b>sum){
        sum+=a;
        count++;
    }
    cout<<count<<endl;

}