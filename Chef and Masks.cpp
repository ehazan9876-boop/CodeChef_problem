#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    int into1 = a*100;
    int into2 = b*10;

    if(into1>=into2){
        cout<<"Cloth"<<endl;
    }
    else{
        cout<<"Disposable"<<endl;
    }
}


return 0;
}


