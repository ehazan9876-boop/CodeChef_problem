#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int arr[4];
    int x=2;
for(int i=0; i<4;i++){
    cin>>arr[i];
}
for(int i=0,j=2; i<2,j<4;i++,j++){
    if(arr[0]==arr[j]){
        x=x-1;
    }

    if(arr[1]==arr[j]){
        x=x-1;
    }
}
cout<<x<<endl;

}








return 0;
}
