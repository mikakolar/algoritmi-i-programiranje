#include <iostream>

using namespace std;

int main()
{
printf("znak 1: ");
char a;
cin>>a;
printf("%c=%i\n",a,a);//pokazuje vrijednost znaka a po ASCII tablici

printf("znak 2: ");
char b;
cin>>b;
printf("%c=%i\n",b,b);//pokazuje vrijednost znaka b po ASCII tablici

printf("\n");//prazna linija

printf("%i+%i=%i\n",a,b,a+b);
printf("%i-%i=%i\n",a,b,a-b);
printf("%i/%i=%i\n",a,b,a/b);
printf("%i*%i=%i\n",a,b,a*b);

    return 0;
}
