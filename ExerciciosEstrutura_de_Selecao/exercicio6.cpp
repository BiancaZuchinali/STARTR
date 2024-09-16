#include <iostream>

using namespace std;

int main(){
     cout<< "Insira um valor inteiro de 4 dígitos:" << endl;
     int valor , invertido;
     cin >> valor;

     int unidade = valor % 10;
     int dezena = (valor/10) % 10;
     int centena = (valor/100) % 10;
     int milhar = (valor/1000) % 10;

     invertido = unidade*1000 + dezena*100 + centena*10 + milhar;

     cout<< "valor invertido:" << invertido << endl;
}
