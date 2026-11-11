#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,x,y;
    cin>>a>>b;
   if(a%10==0){
        x = a/10;
   }
   else{
     x = (a/10)+1;
   }

   if(b%10==0){
        y = b/10;
   }
   else{
     y = (b/10)+1;
   }

   int z = x-y;
   if(z<0){
    cout<<z*-1<<endl;
   }
   else{
    cout<<z<<endl;
   }

}







return 0;
}
