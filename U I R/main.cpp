#include <iostream>

using namespace std;

int main()
{
char a;
float b,c;
cout<<"upisi zelis li racunati U,I ili R: ";
cin>>a;

if(a=='U'){
cout<<"unesi vrijedosti I: ";
cin>>b;
cout<<"unesi vrijedosti R: ";
cin>>c;
printf("\n");
printf("U=I*R \nU=%f",b*c);
}

else if(a=='I'){
cout<<"unesi vrijedosti U: ";
cin>>b;
cout<<"unesi vrijedosti R: ";
cin>>c;
printf("\n");
printf("I=U/R \nI=%f",b/c);
}

else if(a=='R'){
cout<<"unesi vrijedosti U: ";
cin>>b;
cout<<"unesi vrijedosti I: ";
cin>>c;
printf("\n");
printf("R=U/I \nR=%f",b/c);
}

    return 0;
}
