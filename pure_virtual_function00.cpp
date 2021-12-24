 #include<iostream>
 using namespace std;
 class A
 {
     public:
    virtual void fun()=0;
     void fun2()
     {
         cout << "fun 2" << endl;
     }
 };
 class B: public A
 {
     public:
     void fun()
     {
         cout << " i am fun() " << endl;
     }
 };

 int main()
 {
     system("cls");
     B obj2,*p;
     p=&obj2;
     p->fun();
     obj2.fun2();
     return(0);
 }