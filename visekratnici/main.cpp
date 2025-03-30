#include <iostream>

using namespace std;

int main()
{
int a,b,c=0,d=0;
cout<<"visekratnici broja: ";
cin>>a;
cout<<"koliko ih zelis ispisati: ";
cin>>b;

do{
    c++;
    if(c%a==0){
        cout<<c<<endl;
        d++;
    }
} while(d!=b);


    return 0;
}
