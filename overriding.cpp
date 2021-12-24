#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout << "i am doing assignment" << endl;
    }
};
 class B :   public A
 {
     public:
     void display()
     {
         cout << "i've finished the assignment" << endl;
     }
 };

 int main()
 {
     system("cls");
     B obj;
     obj.display();
     obj.A:: display();
     return(0);
 }