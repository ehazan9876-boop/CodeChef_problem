#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    int b = a-1;
    int ans = b/7;
    if(b%7==0){
        cout<<ans<<endl;
    }
    else{
        cout<<ans+1<<endl;
    }
}




return 0;
}
