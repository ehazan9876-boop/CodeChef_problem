#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    int div1 = c/30;
    int sum1 = a+div1;
    if(sum1%b==0){
        cout<<sum1/b<<endl;
    }
    else{
        cout<<(sum1/b)+1<<endl;
    }

}






return 0;
}
