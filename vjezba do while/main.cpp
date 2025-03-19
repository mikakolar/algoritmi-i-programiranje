#include <iostream>

using namespace std;

int main()
{
char a,b;
int c=1, najveci=1;
cout<<"upis zavrsava kada upises: 0"<<endl;
cout<<"upisi znak: "<<endl;
cin>>a;

do{
    cin>>b;
    if(b==a){
        c=c+1;
    if(c>najveci){
        najveci=c;
    }}
    else{c=1;}
    a=b;
} while(b!='0');

cout<<"najveci niz je: "<<najveci;

    return 0;
}
