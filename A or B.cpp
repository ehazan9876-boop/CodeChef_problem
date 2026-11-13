#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    int s1 = a*2;
    int s2 = (a+b)*4;
    int s = s1+s2;
    int ans1=1500-s;

    int x1 = b*4;
    int x2 = (a+b)*2;
    int x = x1+x2;
    int ans2=1500-x;

    if(ans1>=ans2){
        cout<<ans1<<endl;
    }
    else{
        cout<<ans2<<endl;
    }


}

return 0;
}
