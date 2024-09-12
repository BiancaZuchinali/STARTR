#include <iostream>

using namespace std;

int main(){
     cout<< "insira os valores dos lados do triângulo:" << endl;
     float l1, l2, l3;
     cin >> l1>>l2>>l3;
     if(l1 == l2 && l2 == l3){
          cout<<" o triângulo inserido é um Equilátero!"<< endl;
     }else if((l1 == l2 && l2 != l3)||(l1 == l3 && l3 != l2)||(l2 ==l3 && l3!=l1)){
          cout<<" o triângulo inserido é um Isósceles!"<< endl;
     }else if(l1 != l2 && l2 != l3 && l1!=l3 ){
          cout<<" o triângulo inserido é um Escaleno!"<< endl;
     }
}
