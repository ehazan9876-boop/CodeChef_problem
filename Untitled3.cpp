#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
   int a,b;
   cin>>a>>b;
   int into = a*b;
   int sub = into/4;
   if(into%4==0){
    cout<<sub<<endl;
   }
   else{
    cout<<sub+1<<endl;
   }

}

return 0;
}
