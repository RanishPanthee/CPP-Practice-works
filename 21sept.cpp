#include <iostream>
using namespace std;
class counter
{
    int count;
    public:
    counter( )
    {
        count = 0;
    }
    int getcount( )
    {
        return count;
    }
    counter operator ++ (int)
    {
        count++;
        counter temp;
        temp.count = count;
        return temp;
    }
};
int main( )
{
    system("cls");
    counter c1,c2;
    cout<<"\nc1="<<c1.getcount( );
    cout<<"\nc2="<<c2.getcount( );
     c1++;
    c2=c1++;
    cout<<"\nc1="<<c1.getcount( );
    cout<<"\nc2="<<c2.getcount( );
    return 0;
}