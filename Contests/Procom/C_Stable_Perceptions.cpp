#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    int X,Y;
    vector<int>a(N);
    while(N--){
cin>>X>>Y;
a.push_back(X);
a.push_back(Y);
    }
    int Q;
    cin>>Q;
    int A,B;
    vector<int>b(N);
    while(Q--){
cin>>A>>B;
b.push_back(A);
b.push_back(B);
    }
int len1=a.size();
int len2=b.size();
for(int i=0;i<len1;i++){
    for(int j=0;j<len2;j++){
        
    }
}
}