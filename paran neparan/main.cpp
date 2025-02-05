#include <iostream>

using namespace std;

int main()
{
int a;
printf("upisi broj: ");
cin>>a;

printf("\n"); //prazna linija

int b;
b=a%2; //zapisuje ostatak pri djeljenu s 2 (ako ima ostattak broj je neparan)

if(b==0) {cout<<"Vas broj je paran!"<<endl;} //ako je b=0 znaci da nema ostatka pri djeljenju s 2 te je broj paran
else {cout<<"Vas broj je neparan!";} //ako ne vrijedi b=0 broj je neparan




    return 0;
}
