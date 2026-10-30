#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b){
        cout<<"YES"<<endl;
    }
  else if(b>a){
    if(a+c>=b){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  }
  else if(b<a){
    if(a-d<=b){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  }

}





return 0;
}
