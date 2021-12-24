/*
Define a class called �Rectangle� with following attributes: length and breadth
of data type Integer.
Also include the following member functions:
void setSize(int length, int breadth); // this function should set the value of length
and breadth of the Rectangle.
int getArea( ); // this function should return the area of the rectangle.
int getPerimeter( ); // this function should return the perimeter of the rectangle.
// formula to calculate: area = length * breadth.
// formula to calculate: perimeter = 2 * (length + breadth).
Write a driven program as well.     */
#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
    void setData(int length, int breadth)
    {
        l=length;
        b=breadth;
    }
    int getArea()
    {
        return(l*b);
    }
    int getPerimeter()
    {
        return(2*(l+b));
    }

};
int main()
{
    system("cls");
    Rectangle obj;
    int a,b;
    cout << "Enter the length and breadth: " << endl;
    cin >> a >>b;
    obj.setData(a,b);
    cout << "The area is :" << obj.getArea() << endl;
    cout << "The perimeter is: " << obj.getPerimeter() << endl;
    return(0);
}
 