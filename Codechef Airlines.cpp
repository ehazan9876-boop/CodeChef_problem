#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a, b, c;
    cin>>a>>b>>c;
    int sit = a*10;
    if(sit>=b){
        cout<<b*c<<endl;
    }
    else{
        cout<<sit*c<<endl;
    }
}

return 0;
}
