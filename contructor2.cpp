#include<iostream>
using namespace std;
class integer
{
int m,n;
public:
integer (int, int);
void display(void)
{
cout<<"m="<<m<<"\n";
cout<<"n="<<n<<"\n";
}
};

integer::integer (int x,int y)
{
    m=x;
    n=y;
}

int main ( )
{
    system("cls");
    integer int1(0, 100); //constructor called implicitly
    integer int2=integer (25,75); //constructor called explicitly
    cout<<"\nOBJECT 1"<<"\n";
    int1.display();
    cout<<"\nOBJECT 2"<<"\n";
    int2.display();
    return 0;
}
