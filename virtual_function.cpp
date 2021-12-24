#include<iostream>
using namespace std;
class B
{
    public:
   virtual void f1()
    {
        cout << "base class: " << endl;
    }
};

class D: public B
{
    public:
    void f1()
    {
        cout << "child class: " << endl;
    }
};
 int main()
 {
     system("cls");
     B o1,*p;
     D o2;
     p=&o2;// virtual use gareci late binding hunxa ra aba pointer ko type haina pointer ko content herinxa
     p->f1();
     return(0);
 }