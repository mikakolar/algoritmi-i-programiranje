#include <iostream>

using namespace std;

int main()
{
/*
//ZADATAK 1:
char a;
cout<<"upisi malo slovo abeccede: ";
cin>>a;
for(char i='a';i<=a;i++)
    cout<<i<<" ";
*/

/*
//ZADATAK 2:
int n,a=0,b=0;
cout<<"upisi broj: ";
cin>>n;
cout<<"prvih "<<n<<" brojeva dljeljivih s 9: "<<endl;
do{
    a++;
    if(a%9==0){
        cout<<a<<endl;
        b++;
    }
}while(b!=n);
*/

/*
//ZADATAK 3:
int a,p=0,n=0,v=0;
cout<<"upisuj brojeve"<<endl;
cout<<"upisi zavrsava kada upises broj 666"<<endl;
do{
    cin>>a;
    if(a>0)
        p++;
    if(a<0)
        n++;
    if(a>666)
        v++;
}while(a!=666);
cout<<"broj pozitivnih: "<<p<<endl;
cout<<"broj negativnih: "<<n<<endl;
cout<<"broj vecih od 666: "<<v<<endl;
*/


//ZADATAK 4:
int a1,p1,b1,z1=0;
cout<<"upisi dva broja: "<<endl;
cin>>a1;
p1=a1;
do{
    b1=a1%10;
    z1=z1+b1;
    a1=a1/10;
}while(a1!=0);

int a2,p2,b2,z2=0;
cin>>a2;
p2=a2;
do{
    b2=a2%10;
    z2=z2+b2;
    a2=a2/10;
}while(a2!=0);

if(z1>z2)
    cout<<"broj "<<p1<<" ima veci zbroj znamenaka"<<endl;
else
    cout<<"broj "<<p2<<" ima veci zbroj znamenaka"<<endl;



    return 0;
}
