#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,x;
    cin>>a>>b>>c;
    int sub = a-b;
    if(sub<0){
        x=-1*sub;
    }
    else{
        x=sub;
    }
    if(x<=c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}





return 0;
}
