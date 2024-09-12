#include<iostream>

using namespace std;

int main(){
     cout<< "insira a idade do nadador para saber sua categoria:" << endl;
     int idade;
     cin >> idade;
     
     if( idade >=0 && idade<=4 ){
          cout<< "não está em nenhuma categoria!"<< endl;
     }else if(idade >=5 && idade<=7 ){
          cout<< "Está na categoria Infantil A!"<< endl;
     }else if(idade >=8 && idade<=10 ){
          cout<< "Está na categoria Infantil B"<< endl;
     }else if(idade >=11 && idade<=13 ){
          cout<< "Está na categoria Juvenil A"<< endl;
     }else if(idade >=14 && idade<=17 ){
          cout<< "Está na categoria Juvenil B"<< endl;
     }else if(idade > 18){
          cout<< "Está na categoria adulto"<< endl;
     }

}