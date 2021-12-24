#include<iostream>
using namespace std;
 class A
 {
     private:
     int x;
     void message()
     {
         cout << "try" << endl;
     }
     protected:
     void setdata(int a)
     {
         x=a;
         cout << x << endl;
     }
 };

 class B: public A
 {
     public:
     void setvalue(int p)
     {
         setdata(p);
     }

 };

 int main()
 {
     system("cls");
     B obj;
     obj.setvalue(10);
     return(0);
     
 }