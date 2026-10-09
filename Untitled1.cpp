#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    int a,b;
cin>>a>>b;
int sub = a-b;
if(sub>=0){
    cout<<sub<<endl;
}
else{
    cout<<sub*-1<<endl;
}
}

return 0;
}
