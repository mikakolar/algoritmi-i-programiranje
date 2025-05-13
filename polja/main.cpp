#include <iostream>

using namespace std;

int main()
{
int a=10;
int b=100;
int n;
int p[100];
n=100;
for (int i=0; i<n; i++)
    p[i] = rand()%(b-a+1)+a;

cout<<"ZADATAK 1:"<<endl;
b=0;
for(int i=0;i<100;i++){
    if(p[i]>50)
        b++;
}
cout<<"broj brojeva vecih od 50: "<<b<<endl;


cout<<endl<<"ZADATAK 2:"<<endl;
b=0;
for(int i=0;i<100;i++){
    if(p[i]%2==0)
        b++;
}
cout<<"broj parnih brojeva: "<<b<<endl;


cout<<endl<<"ZADATAK 3:"<<endl;
int p1[100];
for(int i=0;i<100;i++){
    p1[i]=p[i];
}
cout<<"PRVOBITNO STANJE:  "<<endl;
for(int i=0;i<100;i++){
        cout<<p1[i]<<" ";
}
cout<<endl<<"NEPARNI BROJEVI= 0:  "<<endl;
for(int i=0;i<100;i++){
    if(p1[i]%2!=0){
        p1[i]=0;
    }
    cout<<p1[i]<<" ";
}cout<<endl;


cout<<endl<<"ZADATAK 4:"<<endl;
int p2[100];
cout<<"PRVOBITNO STANJE:  "<<endl;
for(int i=0;i<100;i++){
    p2[i]=p[i];
    cout<<p2[i]<<" ";
}
cout<<endl<<"PROMJENJEN PREDZNAK AKO DJELJIVO S 7:  "<<endl;
for(int i=0;i<100;i++){
    if(p2[i]%7==0){
        p2[i]=p2[i]*(-1);
    }
    cout<<p2[i]<<" ";
} cout<<endl;


cout<<endl<<"ZADATAK 5: "<<endl;
cout<<"POLJE DO PRVOG POJAVLJANJA BROJA 20:  "<<endl;
for(int i=0;i<100;i++){
     cout<<p[i]<<" ";
     if(p[i]==20)
        break;

}

















return 0;
}

