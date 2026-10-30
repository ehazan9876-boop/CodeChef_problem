#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,counts=0;
    cin>>a>>b;
    int sum = a+b;
    for(int i=0; i<=sum; i++){
        if(i==sum){
            if(i%4==0 || i%4==1){
                counts++;
            }
        }
    }
    if(counts>0){
        cout<<"Alice"<<endl;
    }
    else{
         cout<<"Bob"<<endl;
    }
}





return 0;
}
