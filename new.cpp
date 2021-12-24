 #include<iostream>
 #include<cstring>
 using namespace std;
 int main()
 {
     system("cls");
     char *MyCharPointer=new char;
     char *MyCharArray= new char[30];
     strcpy(MyCharArray,"This is the basis example\n");
     *MyCharPointer='a';
     cout << MyCharArray << *MyCharPointer;
     delete MyCharPointer;
     delete []MyCharArray;
     return(0);
 }