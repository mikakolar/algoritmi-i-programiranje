#include <iostream>

using namespace std;

int main()
{
double a,b;
cout<<"unesi svoju tezinu u kg: ";
cin>>a;
cout<<"unesi svoju visinu u cm: ";
cin>>b;
double c=b/100.0;
cout<<b<<"cm"<<" -> "<<c<<"m"<<endl;

cout<<endl; //prazna linija

double d=a/(c*c);
cout<<"tvoj BMI: "<<d<<endl;

if(d<=18){cout<<"pothranjenost";}
else if(d<=25){cout<<"normalna tjelesna masa";}
else if(d<=30){cout<<"povisena tjelesna masa";}
else{cout<<"pretilost";}







    return 0;
}
