#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"upisi broj: ";
cin>>a;
cout<<"upisi broj veci od "<<a<<": ";
cin>>b;

cout<<endl;

if(a>=b){cout<<"krivi unos"<<endl;
cout<<"drugi broj mora biti veci od "<<a;}
else
{
cout<<"brojevi od "<<a<<" do "<<b<<" su:"<<endl;
for(int i=a;i<=b;i++){
    cout<<i<<" ";
}
}

    return 0;
}
