#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    double div1 = (double)a/b;
    double div2 = (double)c/d;

    cout<<div1<<"   " <<div2<<endl;

    if(div1==div2){
        cout<<"Equal"<<endl;
    }
    else if(div1>div2){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }



}





return 0;
}
