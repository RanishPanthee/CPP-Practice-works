#include <iostream> 
using namespace std; 
class space 
{ 
int x,y,z; 
public: 
void getdata(int a,int b,int c); 
void display(void); 
friend void operator-(space &S); //Overloading unary minus 
}; 
void space::getdata(int a, int b, int c)
{
    x=a;y=b;z=c;
}
void space:: display(void)
{
    cout << x << " ";
    cout << y << " ";
    cout << z << " " << endl;
}

void space:: operator-(space &S)
{
    S.x=-S.x;
    S.y=-S.y;
    S.z=-S.z;
}
int main()
{
    system("cls");
    space S;
    S.getdata(5,-1,25);
    cout << "value before overloading " << endl;
    cout << "S= " ;
    S.display();
    -S; //S-; both can be used// operator -(S);     //activates operator-() 
    cout << "Value after overloading " << endl;
    cout << "S= " ;
    S.display();
    return(0);

}