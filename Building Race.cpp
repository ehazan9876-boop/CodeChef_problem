#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    float a,b,c,d;
    cin>>a>>b>>c>>d;

    float div1 = a/c;
    float div2 = b/d;


    if(div1<div2){
        cout<<"Chef"<<endl;
    }
    else if(div1>div2){
        cout<<"Chefina"<<endl;
    }
    else{
         cout<<"Both"<<endl;
    }

}




return 0;
}

