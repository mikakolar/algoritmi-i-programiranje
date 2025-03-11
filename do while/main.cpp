#include <iostream>

using namespace std;

int main()
{
int a,b=1,c=0;
cout<<"unos traje dok ne unesete 0"<<endl;
cout<<"unos brojeva: "<<endl;
cin>>a;
if(a==0){ //provjerava ako je prvi unos jednak 0
    cout<<"umnozak brojeva je: 0"<<endl;
    cout<<"broj unosa koji nisu 0: 0"<<endl;
}
else{
c=1; //ako a!=0, moramo ga uracunati u ukupan broj unosa koji nisu 0 (c)
do{
     b=b*a;
     cin>>a;
     if(a!=0){c=c+1;}
     else{cout<<"broj unosa koji nisu 0: "<<c<<endl;}
} while(a!=0);

cout<<"umnozak brojeva je: "<<b;
}

    return 0;
}
