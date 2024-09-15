#include<iostream>
#include<iomanip>

using namespace std;

int main(){
     float saldo = 300.0;
     cout<<"Insira o valor do saque:"<< endl;
     float saque;
     cin >> saque;
     if(saque>saldo){
          cout<<"Saldo insuficiente!"<<endl;
     }else{
          saldo = saldo - saque;
          cout<<"Saldo final:"<<fixed<< setprecision(2)<<saldo<< endl;
     }
}
