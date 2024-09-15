#include<iostream>
#include<iomanip>

using namespace std;

int main(){
     cout << "insira sua conta:( usando os símbolos de +, - ,* , /:"<< endl;
     char op;
     float a, b, resposta;
     cin >> a >> op>> b;

     switch(op){
          case('+'):
               resposta = a +b ;
               cout<< fixed<< setprecision(2)<< resposta;
          case('-'):
               resposta = a -b ;
               cout<< fixed<< setprecision(2)<< resposta;
          case('*'):
               resposta = a *b ;
               cout<< fixed<< setprecision(2)<< resposta;
          case('/'):
               resposta = a / b ;
               cout<< fixed<< setprecision(2)<< resposta;

}
}
