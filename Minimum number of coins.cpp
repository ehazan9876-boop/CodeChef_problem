#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;

    if(a%5==0){
        if(a>5){
            int x = a/10;
            int y = x*10;
            if(y==a){
                cout<<x<<endl;
            }
            else{
                cout<<x+1<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }

}




return 0;
}
