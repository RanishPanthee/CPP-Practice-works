#include<iostream>
using namespace std;
class overload
{
    private:
    int x;
    public: 
    void setdata(int a)
    {
        x=a;
    }
    void showdata()
    {
        cout << "\nx=" << x << endl;
    }
    overload operator ++()
    {
        overload o;
        o.x=x++;
        return(o);

    }

};
int main()
{
    system("cls");
    overload o1,o2;
    o1.setdata(5);
    o1.showdata();
    o2=o1.operator++();
    o1.showdata();
    o2.showdata();
    return(0);

}