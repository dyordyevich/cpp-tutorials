#include <iostream>
using namespace std;
int main(){

int godina;
char izbor[1];
int i=0;

while(i==0){
cout<<"Unesite godinu: ";
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

cout<<"Da li zelite da ponovo unesete godinu?\nda-d\nne-n"<<endl;
cin>>izbor[0];

while(tolower(izbor[0])!='d' && tolower(izbor[0])!='n'){
cout<<"Unesite 'd' za da ili 'n' za ne:"<<endl;
cin>>izbor[0];
}

if(tolower(izbor[0])=='n'){
i++;
}

}

system("pause");
return 0;
}
