#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,even=0,odd=0;
    cin>>a>>b>>c;
    for(int i=1; i<=a; i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int ans =(even*b)+(odd*c);
    cout<<ans<<endl;

}



return 0;
}
