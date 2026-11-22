#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int into1 = b*d;
    int into2 = c*d;
    int ans = (a+into1)-into2;
    cout<<ans<<endl;


}





return 0;

}
