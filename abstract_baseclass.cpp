#include<iostream>
using namespace std;
class Base
{
public:
virtual void show ( )=0; //pure virtual function
};
class Derive1 : public Base
{
public:
void show ( )
{
cout<<"show function from Derive1 class"<<endl;
}
};
class Derive2 : public Base
{
public:
void show ( )
{
cout<<"show function form Derive2 class"<<endl;
}
};
int main ( )
{
system("cls");
Base *arr[2]; //pointer to base class
Derive1 dv1;
Derive2 dv2;
arr[0]=&dv1; // put address of dv1 in pointer
arr[1]= &dv2;
arr[0] ->show ( );
arr[1]->show ( );
return 0;
}