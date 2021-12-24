#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    void setdata(int a, int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
        cout << "\n x= " << x << endl << "\n y= " << y << endl;
    }
    friend complex operator +(complex, complex);

};

complex operator +(complex p, complex q)
{
    complex temp;
    temp.x= p.x+ q.x;
    temp.y= p.y+ q.y;
    return(temp);
}

int main()
{
    system("cls");
    complex c1, c2, c3;
    c1.setdata(5,6);
    c2.setdata(4,5);
    c3=c1+c2;
    c3.showdata();
    return(0);
}