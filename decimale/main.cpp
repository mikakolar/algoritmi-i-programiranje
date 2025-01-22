#include <iostream>

using namespace std;

int main()
{
float a;
cout<<"upisi decimalni broj (cijeli dio<10, max 7 znamenka): ";
cin>>a;

float b=(int)a; //"b" je jednak cijelobrojnom dijelu "a"
float c=a-b;
printf("decimalni dio: %f",c);

printf("\n"); //prazna linija
printf("\n"); //prazna linija

cout<<"DECIMALNE ZNAMENKE:"<<endl;
float z1=c*10;
cout<<(int)z1<<endl;

float z2=(z1-(int)z1)*10; //oduzima decimalni broj z1 s cijelim brojem z1 i mnozi s 10
cout<<(int)z2<<endl;

float z3=(z2-(int)z2)*10;
cout<<(int)z3<<endl;

float z4=(z3-(int)z3)*10;
cout<<(int)z4<<endl;

float z5=(z4-(int)z4)*10;
cout<<(int)z5<<endl;

float z6=(z5-(int)z5)*10;
cout<<(int)z6<<endl;


return 0;
}
