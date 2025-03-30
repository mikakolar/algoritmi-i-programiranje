#include <iostream>

using namespace std;

int main()
{
 int a,b=0,nm,nv,z=0;
 cout<<"upisi 10 brojeva: "<<endl;
 cin>>a;
    nm=a;
    nv=a;
    z=a;
 do{
    cin>>a;
    if(a>nv){
        nv=a;
    }
    if(a<nm){
        nm=a;
    }
    z=z+a;
    b++;
 }while(b<9);
 cout<<"najmanji: "<<nm<<endl;
 cout<<"najveci: "<<nv<<endl;
 cout<<"prosjecno: "<<z/10<<endl;


    return 0;
}
