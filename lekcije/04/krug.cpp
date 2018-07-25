#include <iostream>
#include <cmath>
using namespace std;
int main(){

double r,O,P;

cout<<"Unesite vrednost poluprecnika:";
cin>>r;

O=2*r*M_PI;
P=pow(r,2)*M_PI;

cout<<"P="<<P<<endl;
cout<<"O="<<O<<endl;
    
system("pause");
return 0;    
}
