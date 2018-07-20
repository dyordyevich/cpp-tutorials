#include <iostream>
#include <cmath>
using namespace std;
int main(){

//Deklarisanje promenljivih
int xm,ym,xt,yt;
double d;

//Unosenje vrednost
cout<<"xm="<<endl;
cin>>xm;

cout<<"ym="<<endl;
cin>>ym;

cout<<"xt="<<endl;
cin>>xt;

cout<<"yt="<<endl;
cin>>yt;

//Formula
d=sqrt(pow((double)xm-xt,2)+pow((double)ym-yt,2));

//Ispisivanje rezultata
cout<<"d=";
cout<<d<<endl;
//cout<<"d="<<d<<endl;
    
system("pause");
return 0;
}
