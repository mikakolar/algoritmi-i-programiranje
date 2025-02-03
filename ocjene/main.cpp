#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"upisi svoj broj bodova: ";
cin>>a;
cout<<"upisi max broj bodova: ";
cin>>b;

printf("\n"); //prazna linija

printf("%i/%i",a,b);
int c=(a*100)/b; //c je postotak izmedu a i b
printf("  %i%%  ",c); //ispisuje postotak

if(c>=90) {printf("odlican(5)");}

if((c>=77)&&(c<90)) {printf("vrlo dobar(4)");}

if((c>=64)&&(c<77)) {printf("dobar(3)");}

if((c>=50)&&(c<64)) {printf("dovoljan(2)");}

if(c<50) {printf("nedovoljan(1)");}

printf("\n");







    return 0;
}
