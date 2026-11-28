#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,z=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0; i<a;i++){
        cin>>arr[i];
        int x = arr[i]+b;
        if(x%7==0){
            z++;
        }
    }
    cout<<z<<endl;

}





return 0;
}
