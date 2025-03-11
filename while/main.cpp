#include <iostream>

using namespace std;

int main()
{
 int a,b=0,c=0,d=0;
 cout<<"unos zavrsava kada unesete: 0"<<endl;
 cout<<"unos brojeva: "<<endl;
 cin>>a;
 while(a!=0){
    b=b+a;
    cin>>a;
    c=c+1;
    }
cout<<"broj unosa koji nisu 0: "<<c<<endl;
cout<<"zbroj brojeva je: "<<b;


    return 0;
}
