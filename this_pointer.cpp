#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    void setData(int l, int b, int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    void showData()
    {
        cout << "l= " << l << "  b= " << b << "  h= " << h << endl;
    }
};

int main()
{
    system("cls");
    Box obj;
    obj.setData(5,6,7);
    obj.showData();
    return(0);

}