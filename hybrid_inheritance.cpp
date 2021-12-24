//Diamond problem
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void f1()
    {
        cout << "f1" << endl;
    }
};
class B1:virtual public A
{
 public:
 int b1;
 void f2()
 {
     cout << "f2" << endl;
 }
};
class B2:virtual public A
{
    public:
    int b2;
    void f3()
    {
        cout << "f3" << endl;
    }
};
class C: public B1, public B2
{
    public:
    int c;
    void f4()
    {
        cout << "f4" << endl;
    }
};
int main()
{
    system("cls");
    C obj;
    B1 obj2;
    obj.f1();
    obj2.f1();
    obj.f2();
    cout << "size of class C is :   " << sizeof(obj) << endl;
    return(0);
}