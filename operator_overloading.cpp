  #include <iostream>
using namespace std;
class space
{
int x,y,z;
public:
void getdata(int a,int b,int c);
void display(void);
void operator-(); //Overloading unary minus
};
void space :: getdata(int a,int b,int c)
{
x=a; y=b; z=c;
}
void space :: display (void)
{
cout << x << " ";
cout << y << " ";
cout << z << "\n";
}
void space :: operator-() //Defining operator-()
{
x=-x; y=-y; z=-z;
}
int main ()
{
space S;
S.getdata(5,-15,25);
cout << "Value before overloading" << "\n";
cout << "S =";
S.display();
-S; //activates operator-()
cout << "Value after overloading" << "\n";
cout << "S =";
S.display();
return 0;
}