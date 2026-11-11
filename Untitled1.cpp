#include<bits/stdc++.h>
using namespace std;
class area{
private:
int len,wed,hei;
public:
    area(){
    len =1;
    wed =1;
    hei=1;
    }
    area(int side){
    len =side;
    wed =side;
    hei=side;
    }
    area(int a, int b, int c){
    len =a;
    wed =b;
    hei=c;
    }

    void dis(){
    cout<<len*wed*hei<<endl;

    }

};
int main(){
area s;
int a;
cin>>a;
area x(a);

int b,c,d;
cin>>b>>c>>d;
area z(b,c,d);


s.dis();
x.dis();
z.dis();

return 0;
}
