class shape {
public:
    double side1,side2;
public:
    shape(){
        side1=1;
        side2=1;
    }
        shape(double a ,double b){
        side1=a;
        side2=b;
   }
    void setData(){
        cout<<"enter data"<<endl;
        cin>>side1>>side2;
    }
    virtual void displayArea(){
        
    }
    
};

class Triangle:public shape
{
    
    public:void displayArea()
        {
            cout<<"Area of triangle is"<<0.5*side1*side2<<endl;
    }
    Triangle (double c, double d):shape(c,d){
        
    }
    Triangle():shape(){
        
             }
};
class rectangle:public shape
{
public: void displayArea(){
    cout<<"area of rectangle is"<<side1*side2<<endl;
    
}
   rectangle(double e, double f):shape(e,f){
        
    }
    rectangle():shape(){
    
         }
};

int main(){
    
    Triangle t(2,2);
    t.displayArea();
    
    Triangle t1;
    t1.setData();
    t1.displayArea();

    rectangle r(5,2);
    r.displayArea();
    
    rectangle r2;
    r2.setData();
    r2.displayArea();
    
    Triangle t2;
    t1.displayArea();
    
    rectangle r3;
    r.displayArea();
}