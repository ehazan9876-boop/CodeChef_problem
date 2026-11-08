#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,div;
    cin>>a>>b;
    if(b%100==0){
        div = b/100;
        if(a<div){
            cout<<div-a<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        div = (b/100)+1;
        if(a<div){
            cout<<div-a<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}





return 0;
}
