#include <iostream>

using namespace std;

int main()
{
int a,b=0,c=0,z=1;
cout<<"granica: ";
cin>>a;
cout<<"prvih "<<a<<" brojeva s znamenkom jedinice 3: "<<endl;
do{
    b++;
    if(b%10==3){
    cout<<b<<endl;
    c++;
    z=z*b;
    }
}while (c!=a);

cout<<"aritmeticka sredina: "<<z/a;



    return 0;
}
