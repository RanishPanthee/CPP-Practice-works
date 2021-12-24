#include<iostream>
using namespace std;
class shape
{
    public:
    double side1;
    double side2;
    shape()
    {}
  shape(double a, double b)
  {
    side1=a;
    side2=b;
  }
   void setData(double x, double y)
    {
      side1=x;
      side2=y;
    }
    virtual void displayArea()
    {

    }

};

 class triangle: public shape
 {
     public:
     void displayArea()
     {
       cout << "Area of triange is: " << (0.5)*side1*side2 << endl;
     }
     triangle(double c, double d)
     {
       side1=c;
       side2=d;
     }
 };

 class rectangle: public shape
 {
   public:
   void displayArea()
   {
     cout << "Area of rectange is: " << side1*side2 << endl;
   }
   rectangle(double e, double f)
   {
     side1=e;
     side2=f;
   }
 };

 int main()
 {
   system("cls");
   triangle t1(1,2);
   double m,n;
   cout << "enter the two dimensions: " << endl;
   cin >> m >> n;  
   t1.setData(m,n);
   t1.displayArea();
   rectangle r1(1,2);
   r1.setData(m,n);
   r1.displayArea();
   return(0);
 }