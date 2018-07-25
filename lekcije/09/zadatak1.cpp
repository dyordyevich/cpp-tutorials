#include <iostream>
using namespace std;
int main(){

int godina;
char izbor[1];
ponovi:cout<<"Unesite godinu: ";
cin>>godina;

if(godina>0){
switch(godina%4){
  case 0:
       cout<<"Uneta godina je prestupna."<<endl;
       break;
  default:
       cout<<"Uneta godina nije prestupna."<<endl;
       break;
}
}else{
      cout<<"Uneti broj je manji ili jednak nuli."<<endl;
}

greska:cout<<"Da li zelite da ponovo unesete godinu?\nda-d\nne-n"<<endl;
cin>>izbor[0];

if(tolower(izbor[0])=='d'){
goto ponovi;
}else if (tolower(izbor[0])!='d' && tolower(izbor[0])!='n'){
      cout<<"Niste uneli ispravno slovo."<<endl;
      goto greska;
}

system("pause");
return 0;
}
