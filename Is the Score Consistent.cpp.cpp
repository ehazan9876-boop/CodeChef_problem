#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;

    if(a<=c && b<=d){
        cout<<"POSSIBLE"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }


}


return 0;
}
