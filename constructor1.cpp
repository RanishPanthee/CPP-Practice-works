#include<iostream>
using namespace std;
class complex
{
    private: 
    int a,b;
    public:
    complex(int a, int b)
    {
        cout << a+b << endl;
    }
    complex(int a)
    {
        cout << a << endl;
    }
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }
};

int main()
{
    system("cls");
    complex c1(4,5),c2(5);
    complex c3(c1);
    return(0);
}