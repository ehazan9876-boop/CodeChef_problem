#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    float a;
    cin>>a;
    int div1 = a/10;
    float div2 = a/10;

    if(div1==div2){
        cout<<div2<<endl;
    }
    else{
        cout<<div2+1<<endl;
    }
}






return 0;
}
