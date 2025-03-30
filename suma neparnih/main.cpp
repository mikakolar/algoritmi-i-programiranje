#include <iostream>

using namespace std;

int main()
{
int a,z=0;
cout<<"upisi granicu: ";
cin>>a;
cout<<"neparni brojevi do "<<a<<":"<<endl;
for(int i=0;i<=a;i++){
    if(i&2!=0){
        cout<<i<<endl;
        z=z+i;
    }
}
cout<<"suma neparnih brojeva: "<<z<<endl;




    return 0;
}
