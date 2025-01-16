#include <iostream>

using namespace std;

int main()
{
char a;
printf("upisi znak: ");
cin>>a;

int b;  //bira broj s kojim ce se "a" zbrojiti i oduzeti
cout<<"upisi broj: ";
printf("%c+/-",a);
cin>>b;

printf("\n");//prazna linija

cout<<"Rezultat po ASCII tablici:"<<endl;
printf("%c+%i=%c\n",a,b,a+b);
printf("%c-%i=%c\n",a,b,a-b);

    return 0;
}
