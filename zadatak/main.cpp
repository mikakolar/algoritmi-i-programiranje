#include <iostream>

using namespace std;

int main()
{
int a,z=1;
cout<<"upisi granicu: ";
cin>>a;
cout<<"brojevi koji djeljenjem s 7 daju ostatak 4: "<<endl;
for(int i=0;i<=a;i++){
    if(i%7==4){
        cout<<i<<endl;
        z=z*i;
    }
}
cout<<"umnozak: "<<z;



    return 0;
}
