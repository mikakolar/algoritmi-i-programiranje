#include <iostream>

using namespace std;

int main()
{
//ZADATAK 1
int p[100];
for(int i=0;i<100;i++){
    p[i]=99-i;
    cout<<p[i]<<" ";
} cout<<endl<<endl;

//ZADATAK 2
int p2[100];
for(int i =0;i<100;i++)
    p2[i]=p[i];
for(int i=0;i<100;i++){
    if(p2[i]<50)
        p2[i]=p2[i]-1;
    else
        p2[i]=p2[i]+1;
    cout<<p2[i]<<" ";
} cout<<endl<<endl;
/*
//ZADATAK 3
char p3[10];
for(int i=0;i<10;i++)
    cin>>p3[i];
for(int i=0;i<10;i++){
    if(p3[i]>p3[0])
        cout<<p3[i];
} cout<<endl<<endl;
*/
//ZADATAK 4
int c=0,a=0,b=10;
for(int i=0;i<100;i++){
    p[i]=rand()%(b-a+1)+a;
    cout<<p[i]<<" ";
}
for(int i=0;i<99;i++){
    if(p[i]==p[i+1])
        c++;
} cout<<endl<<c;







    return 0;
}
