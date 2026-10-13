#include<bits/stdc++.h>
using namespace std;
int main(){
int n,div;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
if(a>b){
    int sub = a-b;
    if(sub%4==0){
        div=sub/4;
    }
    else{
        div = (sub/4)+1;
    }
    cout<<div<<endl;
}
else{
    cout<<0<<endl;
}


}




return 0;
}
