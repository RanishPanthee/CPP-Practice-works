#include<iostream>
using namespace std;

class father
{
    public:
    void message();
};
 void father:: message()
 {
     cout << "hello! from father"<< endl;
 }
  class daughter: public father
  {
    public:
    void fun();
  };
   void daughter:: fun()
   {
       cout << "message from daugther class " << endl;
   }

    int main()
    {
        system("cls");
        father f;
        daughter d;
        f.message();
        d.message();
        d.fun();
        return(0);
    }