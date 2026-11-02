#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    int sum = a+c;
    if(sum<=b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}




return 0;
}
