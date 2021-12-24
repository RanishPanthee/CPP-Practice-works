#include<iostream>
using namespace std;
class Enemy
{
protected:
int attackPower;
public:
void SetAttackPower(int a)
{
attackPower=a; 
}
};
class Ninja:public Enemy
{
public:
virtual void attack()
{
cout<<" I am Ninja and I am chopping you with "<<attackPower<<" power."<<endl;
}
};
int main()
{
system("cls") ;
Ninja n;
Monster m;
Enemy *Enemy1=&n; // because ninja is of type enemy this is valid
Enemy *Enemy2=&m; // anything that an enemy can do,monster can do
Enemy1->SetAttackPower(100); // ninja is just a more specific type of enemy
Enemy2->SetAttackPower(50); //every enemy has setattack power
Enemy1.attack(); // cannot use enemy1 because its type is e
Enemy2.attack(); // enemy class does not have attack function
return 0; // virtual member make this even easier
}