#include <iostream>

using namespace std;

int main()
{
double a,b;
cout<<"upisi djeljenik: ";
cin>>a;
cout<<"upisis djelitelj: ";
cin>>b;

cout<<endl;

cout<<"rezultat: "<<a<<"/"<<b<<"="<<a/b<<endl;
if((int)a%(int)b==0){cout<<"broj "<<a<<" je djeljiv s brojem "<<b;} //NAPOMENA: % se koristi samo za int vrijednosti
else{cout<<"broj "<<a<<" nije djeljiv s brojem "<<b;}


return 0;
}
