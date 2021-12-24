//through member function
#include <iostream> 
using namespace std; 
class complex{
float real,imag;
public:
complex(){	
}
complex(float r,float i){
	real=r;
	imag=i	;
}
complex operator + (complex c){
complex	temp;
temp.real= real+c.real;
temp.imag= imag+c.imag;
return temp;
}

void display(){
	cout<<real<<"+j"<<imag;
}

};


main(){
	complex c,c1(1.4,1.1),c2(5.5,4.5);
	c=(c1+c2);
	c.display();

}