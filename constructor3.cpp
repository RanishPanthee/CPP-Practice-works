#include<iostream>
using namespace std;
class num
{
    int a;
    int b;
    public:
    num(int x, int y);
    num(num &n);
    void display();
};
 num::num(num &n)
 {
     a=n.a;
     b=n.b;

 }

 num::num(int x, int y)
 {
     a=x;
     b=y;
 }
  void num:: display()
  {
      cout << a << endl << b << endl;
  }
   main()
   {
       system("cls");
       num n1(10,20);
       n1.display();
       num n2(n1);
       n2.display();
       num n3=n1;
       n3.display();
       return(0);
   }

