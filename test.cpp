#include<iostream>
using namespace std;
class A
{
    public:
    void message()
    {
        cout << "protected" << endl;
    }
};
 int main()
 {
     system("cls");
     A obj;
     obj.message();
     return(0);
 }