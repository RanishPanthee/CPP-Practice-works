#include <iostream>
using namespace std;
class A
{
public:
void f1(){cout<<"Hello A\n";}
void f2(){cout<<"Hello F2 of A\n";}
};
class B: public A
{
private:
int x;
public:
void f1(){cout<<"Hello B\n";}
void f2(int a) //method hiding
{
cout<<"Hello F2 of B"<<endl;
}
void f3() {cout<<"I am overloaded f3 without argument\n";}
void f3(int k) {cout<<"I am overloaded f3 with argument\n";}
};
int main()
{
system("cls");
B b;
b.f1(); //method overriding
//b.f2(); //Error
b.f2(1); // method hiding
b.f3(); //method over
b.f3(10); //method overloading
}