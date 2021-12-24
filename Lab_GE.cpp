#include<iostream>
using namespace std;
class time{
    int hr;
    int min;
    int sec;
    public:
    void gettime();
    void display();
    time operator -(time);
};
void time:: gettime(){
    cout<<"--Enter time as hour:minute:sec--"<<endl;
    cin>>hr;
    cin>>min;
    cin>>sec;
}

time time:: operator -(time c){
    time temp;
    temp.hr=hr-c.hr;
    temp.min=min-c.min;
    temp.sec=sec-c.sec;
    if(temp.min>=60){
        temp.hr=hr+1;
        temp.min=min-60;
    }
    return temp;

}
void time:: display(){
    cout<<"The time you entered is :   "<<hr<<":"<<min<<":"<<sec<<endl;
}
int main(){
    time t1,t2,t3;
    t1.gettime();
    t1.display();
    t2.gettime();
    t2.display();
    t3=t1-t2;
    t3.display();

}