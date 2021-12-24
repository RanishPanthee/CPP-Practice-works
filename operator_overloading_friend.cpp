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
friend complex operator + (complex c1,complex c2);

void display(){
	cout<<real<<"+j"<<imag;
}

};
complex operator + (complex c1){
complex	temp;
temp.real= c1.real+c2.real;
temp.imag= c1.imag+c2.imag;
return temp;
}

main(){
    system("cls");
	complex c,c1(1.4,1.1),c2(5.5,4.5);
	c=c1+c2;
	c.display();
	
	
	
}