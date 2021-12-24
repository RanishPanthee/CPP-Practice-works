#include<iostream>
using namespace std;
class B
{
    public:
    void fun1()
    {
        cout << "Message from base class" << endl;
    }
};

class D: public B
{  
    public:
 void fun2()
 {
     cout << "Derived class" << endl;
 }
};

int main()
{
    system("cls");
    D obj;
    obj.fun1();
    obj.fun2();
    return(0);
}