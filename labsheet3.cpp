#include<iostream>
#include<cmath>
using namespace std;
class graph
{
public:
int x,y;
void distance(int x, int y);
};

void graph:: distance(int a, int b)
{
    int d;
    cout << "enter the x-cordinates:    " << endl;
    cin >> a;
    cout << "enter the y-cordinates:    " << endl;
    cin >> b;
    d=sqrt( pow(a,2)-pow(b,2));
    cout << "The distance is:   " << d << endl;

}

int main()
{
    graph g;
    g.distance();
    return(0);
}