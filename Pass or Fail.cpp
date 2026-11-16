#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;

    int into = b*3;
    int sub = a-b;
    int ans = into-sub;

    if(ans>=c){
        cout<<"PASS"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
}





return 0;
}
