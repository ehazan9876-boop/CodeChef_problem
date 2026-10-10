#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
    int b,c;
cin>>b>>c;
if(b>c){
    cout<<0<<endl;
}
else if(b<=c)
cout<<c-b<<endl;
}


return 0;
}
