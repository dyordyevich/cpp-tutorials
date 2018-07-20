#include <iostream>
#include <cmath>
using namespace std;
int main(){

//Deklarisanje promenljivih
double a,b,c,rezultat, c_pomoc;

//Unosenje vrednosti
cout<<"a=";
cin>>a;

cout<<"b=";
cin>>b;

cout<<"(u stepenima)c=";
cin>>c_pomoc;

c=c_pomoc*M_PI/180;

//Formula
rezultat=(pow(a,2)+2*a*b+cbrt(pow(b,4)))/(sin(c))-log(exp(a));

//Prikazivanje rezultata
cout<<"Rezultat: ";
cout<<rezultat<<endl;

system("pause");
return 0;
}
