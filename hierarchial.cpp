#include<iostream>
using namespace std;
class shape
{
    public:
 int length, breadth;
 void getData(int l, int b)
 {
     length=l;
     breadth=b;
 }
};

class rectangle: public shape
{
    public:
    int getArea()
    {
      return(length*breadth);  
    }
};

class square: public shape
{
    public:
    int getArea()
    {
        return(length*length);
    }
};
int main()
{
    system("cls");
    int a,b;
    cout <<" enter the length and breadth" << endl;
    cin >> a >> b;
    rectangle r;
    r.getData(a,b);
    cout << "the area of rectangle is: " << r.getArea() << endl;
    square s;
    s.getData(a,b);
    cout << "the area of square is: " << s.getArea() << endl;
    return(0);
}