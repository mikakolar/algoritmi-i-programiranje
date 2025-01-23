#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"upisi peteroznamenkasti broj: "<<endl;
cin>>a;

printf("\n"); //pratna linija
cout<<"zbroj znameanka:"<<endl;

int z5;
z5=a%10; //zapisuje samo ostatak od a/10

a=a/10; //mijenja vrijednost a (zapisuje prijasnju vrijednost bez zadnje znamenke)
int z4;
z4=a%10;

a=a/10; //zapisuje novu vrijednost a bez zadnje znamenke
int z3;
z3=a%10;

a=a/10;
int z2;
z2=a%10;

a=a/10;
int z1;
z1=a%10;

printf("%i + %i + %i + %i + %i = %i",z1,z2,z3,z4,z5,z1+z2+z3+z4+z5);


return 0;
}
