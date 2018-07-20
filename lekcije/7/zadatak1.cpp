#include <iostream>
using namespace std;
int main(){

int kolicina;
cout<<"Unesite kolicinu kupljenih knjiga";
cin>>kolicina;

if(kolicina<5 && kolicina>0){
cout<<"Korisnik nema popusta na ovu kolicinu."<<endl;
}
else if(kolicina >=5 && kolicina <10){
cout<<"Korisnik ima 10% popusta."<<endl;
}
else if(kolicina >=10 && kolicina <20){
cout<<"Korisnik ima 15% popusta."<<endl;
}else if(kolicina>=20){
cout<<"Korisnik ima 20% popusta."<<endl;
}else{
cout<<"Uneta vrednost nije ispravna."<<endl;
}

system("pause");
return 0;
}
