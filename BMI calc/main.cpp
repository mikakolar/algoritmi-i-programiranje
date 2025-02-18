#include <iostream>

using namespace std;

int main()
{
double a,b;
cout<<"upisi svoju tezinu u kg: ";
cin>>a;
cout<<"upsis svoju visinu u cm: ";
cin>>b;
double c=(double)b/100; //pretvara vrijednost b iz cm u m
cout<<b<<"cm -> "<<c<<"m"<<endl;

cout<<endl; //prazna linija

cout<<"BMI: ";
double d=a/(c*c);
cout<<d<<endl;

switch((int)d){
case 0 ... 18:
    cout<<"pothranjenost";
    break;
case 19 ... 25:
    cout<<"normalna masa";
    break;
case 26 ... 30:
    cout<<"prekomjerrrna masa";
    break;
case 31 ... 100:
    cout<<"pretilost";
    break;
}




    return 0;
}
