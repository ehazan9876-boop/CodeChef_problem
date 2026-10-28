#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while(n--){
    int a,sum =0;
    cin>>a;
    while(a!=0){
        int div = a%10;
       sum =sum +div;
       a=a/10;

    }
 cout<<sum<<endl;

}



return 0;
}
