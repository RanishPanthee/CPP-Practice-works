/* #include<iostream>
using namespace std;
class num
{
    int a,b;
    public:
    num();
    void display()
    {
        cout << a << "  " << b << endl;
    }

};

num::num()
{
    a=10;
    b=20;
}

int main()
{
    system("cls");
    num n1;
    n1.display();
    num n2=num();
    n2.display();
    return(0);
}
*/
/*
#include<iostream>
using namespace std;
class num
{
    int a;
    int b;
    public:
    num(int x,int y); // declaration of Parameterized
    // Constructor num ( constructor )
    void display();
};

num::num(int x, int y) // definition of Parameterized 
{
a=x;
b=y;
}

void num::display()
{
    cout<<a<<endl<<b<<endl;
}

 int main()
{
    num n1(10,20); // implicit call to Parameterized Constructor num
    n1.display();
    num n2=num(30,40); // explicit call to Parameterized Constructor num
    n2.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
class num
{
int a;
int b;
public:
num(int x=1,int y=2); // declaration of constructor
void display();
};

num::num(int x,int y) // definition of constructor num
{
a=x;
b=y;
}

void num::display()
{
cout<<b<<endl<<a<<endl;
}

int main()
{
    system("cls");
    num n1(10,20); // implicit call to constructor num with two argument
    n1.display();// 10,20
    num n2(30); // implicit call to constructor num with one argument
    n2.display(); //30
    num n3; // implicit call to constructor num with no argument
    n3.display();
    num n4=num(40,50); // explicit call to constructor num with two argument
    n4.display();
    num n5=num(60); // explicit call to constructor num with one argument
    n5.display();
    num n6=num(); // explicit call to constructor num with no argument
    n6.display();
    return 0;
}