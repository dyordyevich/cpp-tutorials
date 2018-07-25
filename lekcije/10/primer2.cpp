#include <iostream>
#include <cctype>
using namespace std;
int main(){

int x=1;
char izbor[1];

do{

cout<<"Ucim C++. Da li zelite da izadjete iz petlje?\nda-d\nne-bilo koje slovo"<<endl;
cin>>izbor[0];

if(tolower(izbor[0])=='d'){
x++;
}while(x==1);

}

system("PAUSE");
return 0;
}
