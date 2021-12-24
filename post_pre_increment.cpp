#include<iostream>
using namespace std;
class increment{
    private:
    int x;
    public:
    void getdata(int a);
    void showdata();
    increment operator++(int);

};
void increment::getdata(int a){
    x=a;
}
void increment::showdata(){
    cout<<"x="<<x<<endl;
}

increment increment::operator++(int){
    increment i;

i.x=x++;
return(i);

}
int main(){
    increment c1,c2;
    c1.getdata(5);
    c1.showdata();
    c2=c1++;
    c2.showdata();
    c1.showdata();
   
    
}
