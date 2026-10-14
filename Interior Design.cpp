#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
cin>>a>>b>>c>>d;

int sum1 = a+b;
int sum2 = c+d;

if(sum1<sum2){
    cout<<sum1<<endl;
}
else{
     cout<<sum2<<endl;
}
}


return 0;
}

