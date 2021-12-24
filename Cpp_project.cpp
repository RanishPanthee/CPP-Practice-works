//-----CALCULATOR-----//
#include<iostream>
#include<cmath>
using namespace std;
//operation function declaration//
void arithmetic();
void trigonometric();
void exponential();
void log1();
void power();
class cal{
    int n;
    public:
    //member functions//
    void userselect();
    void operation();
};
//member function definition//
void cal::userselect()
{
    int op;
    cout<<"----------!!WELCOME!!----------"<<endl;
    cout<<"Types of operation available:"<<endl;
    cout<<"[1] Arithmetic"<<endl;
    cout<<"[2] Trigonometric"<<endl;
    cout<<"[3] Exponential"<<endl;
    cout<<"[4] Logarithmic"<<endl;
     cout<<"[5] Power of any number"<<endl;
    cout<<"enter your choice among 1,2,3,4,5"<<endl;
    cin>>op;
    n=op;
}
void cal::operation()
{
    int sel;
    sel=n;
    switch (n)
    {
    case 1:
      arithmetic();
       break;
    case 2:
       trigonometric();
    break;
    case 3:
        exponential();
    break;
    case 4:
        log1();
    break;
    case 5:
        power();
    default:
    cout<<"-----!!INVALID CHOICE!! ENTER VALID NUMBER-----"<<endl;
    break;
    }
}
    //definition of operator function//
    void arithmetic(){
        int n1;
        float a,b;
        cout<<"-----CHOOSE THE OPERATOR-----"<<endl;
        cout<<"[1] addition"<<endl;
        cout<<"[2] substraction"<<endl;
        cout<<"[3] multipication"<<endl;
        cout<<"[4] division"<<endl;
        cout<<"Enter your choice among 1,2,3,4"<<endl;
        cin>>n1;
        cout<<"ENTER THE FIRST OPERAND"<<endl;
        cin>>a;
        cout<<"ENTER THE SECOND OPERAND"<<endl;
        cin>>b;
        switch (n1)
        {
        case 1:
           cout<<(a+b);
            break;
        case 2:
           cout<<(a-b);
            break;
        case 3:
            cout<<(a*b);
            break;
        case 4:
            cout<<(a/b);
            break;
        default:
        cout<<"-----!!INVALID CHOICE!! ENTER VALID NUMBER-----"<<endl;
            break;
        }
    }
    void trigonometric(){
        float angle;
        int n2;
        float r1,r2,r3;
        float d1,d2,d3;
        cout<<"-----CHOOSE THE TRIGONMETRIC EXPRESSION-----"<<endl;
        cout<<"[1] Sin in radian measure"<<endl;
        cout<<"[2] Cosine in radian measure"<<endl;
        cout<<"[3] Sin in degree measure"<<endl;
        cout<<"[4] Cosine in degree measure"<<endl;
        cout<<"Enter your choice among 1,2,3,4"<<endl;
        cin>> n2;
        cout<<"Enter angle"<<endl;
        cin>> angle;
         r1=sin(angle);
         r2=cos(angle);
         d1=(180/M_PI)*r1;
         d2=(180/M_PI)*r2;
       
        switch (n2)
        {
        case 1:
          cout<<r1;
          break;
        case 2:
          cout<<r2;
          break;
        case 3:
          cout<<sin(d1);
          break;
        case 4:
          cout<<cos(d2);
          break;
        default:
          cout<<"-----!!INVALID CHOICE!! ENTER VALID NUMBER-----"<<endl;
          break;
        }
    }
    void log1()
    {
     float val;
     cout << "Enter the value: ";
      cin >> val;
      try
      {
       if(val<=0)
        throw val;
     }
     catch(float z)
      {
     cout <<"-----!!INVALID NUMBER!! ENTER VALID NUMBER-----" << endl;
     }
     cout << log(val) << endl;
}
void exponential()
{
  float b,e;
  cout << "Enter number";
  cin >> b;
  cout << exp(b) << endl;
}
void power(){
    float b,y;
    cout<<"Enter base"<<endl;
    cin>>b;
    cout<<"Enter exponent"<<endl;
    cin>>y;
    cout<< pow(b,y);
}

int main(){
    cal obj1;
    obj1.userselect();
    obj1.operation();
    return 0;
}