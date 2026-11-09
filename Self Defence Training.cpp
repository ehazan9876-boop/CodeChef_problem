#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int x,counts=0;
    cin>>x;
    int arr[x];
    for(int i=0; i<x;i++){
        cin>>arr[i];
        if(arr[i]>=10 && arr[i]<=60){
            counts++;
        }
    }
    cout<<counts<<endl;



}





return 0;
}
