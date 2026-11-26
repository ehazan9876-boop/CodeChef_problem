#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;

int over = 20-b;
int ball = over*6;
int run = ball*6;
int total = c+run;
if(total>a){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}




return 0;
}
