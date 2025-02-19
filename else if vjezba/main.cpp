#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"upisi neki broj do 10 000: ";
cin>>a;

cout<<"tvoj broj je izmedu: ";

if(a>10000){cout<<"izvan intervale";}
else if(a>=1000){cout<<"1000-10000";}
else if(a>=100){cout<<"100-1000";}
else if(a>=10){cout<<"10-100";}
else{cout<<"1-10";}
    return 0;
}
