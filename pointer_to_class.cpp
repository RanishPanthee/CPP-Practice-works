#include<iostream>
#include<string.h>
using namespace std;

class rectangle{
    int width,height;
public:
    rectangle(int x, int y):width(x),height(y){}    //value assign gareko
    int area(void){
        return width*height;
    }
};

int main(){
    system("cls");
    rectangle obj(3,4);
    rectangle *foo,*bar,*baz;   //pointer declare gareko
    foo=&obj;   //object ko address leko (pointer= address of object pass gareko)
    bar= new rectangle(5,6);    // dynamic memory allocate gareko; class name vaneko object ko data type
    baz= new rectangle[2]{{2,5},{3,6}}; // array ko lagi dynamicaly memory allocate gareko 
    cout<<"obj's area is"<<obj.area()<<endl;
    cout<<"*foo's area is"<<foo->area()<<endl;
    cout<<"*bar's area: "<< bar->area()<<endl;
    cout<<"baz[0]'s area is"<<baz[0].area()<<endl;  //array ko element pass by value hunxa
    cout<<"baz[1]'s area is"<<baz[1].area()<<endl;
    delete bar;
    delete[] baz;
    return 0;
}