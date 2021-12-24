/*  Do you remember a graph paper; plotting x-axis, y-axis and origin (0,0). A Point
consists of two values; one is x-axis value and other one is y-axis value.
Considering only a first quadrant and two such points, write a program that finds
the distance between each other. Use classes and objects.   */
#include<iostream>
#include<cmath>
using namespace std;
class Graph
{
    float x,y;
    public:
    void getData(float a, float b)
    {
        x=a; y=b;
        
    }
    float  calculate()
    {
        float distance;
        distance=sqrt(pow(x,2)+pow(y,2));
        return(distance);
    }
};
 int main()
 {
     system("cls");
     Graph obj;
     float p,q;
     cout << "Enter the X and Y coordinates: " << endl;
     cin >> p >> q; 
     obj.getData(p,q);
     cout << "The distance is: " << obj.calculate();
     return(0);
 }