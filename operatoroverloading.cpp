#include<iostream>
using namespace std;
class complex
{
    private: 
    int a,b;
    public:
    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout << "\na=" << a << "\nb=" << b << endl;
    }
    complex operator +(complex c)    // complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
   complex product(complex c)
   {
       complex temp;
       temp.a=a*c.a;
       temp.b=b*c.b;
       return(temp);
   }
};

int main()
{
    system("cls");
    complex c1,c2,c3,c4;
    c1.getdata(5,6);
    c2.getdata(4,5);
    c3=c1+c2;   // c3=c1.add(c2);
    c3.showdata();
    c4=c1.product(c2);
    c4.showdata();
    return(0);
}