#include <iostream>
using namespace std;
int main(){

int godina;
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

system("pause");
return 0;
}
