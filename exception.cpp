#include<iostream>
using namespace std;
class divide{
    int a,b,c;
    public:
    int exp(int x,int y){
        a=x;
        b=y;
        c=a/b;
        cout<<c;
    }

};
int main(){
    divide obj;
    obj.exp(1,0);
    return 0;
}
