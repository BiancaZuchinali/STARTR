#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Cliente {
    string nome;
    float saldo_m;
};

int main() {
    Cliente clientes[5] = {
        {"Ana", 250.50},
        {"Pedro", 2500.75},
        {"Maria", 500.20},
        {"Luca", 800.10},
        {"Luana", 450.00}
    };

    cout << "Insira o nome do cliente para consultar seu crédito. Os clientes cadastrados são: Ana, Pedro, Maria, Luca e Luana." << endl;
    string nomeCliente;
    cin >> nomeCliente;

    float credito = 0.0;

    if (nomeCliente == "Ana") {
        if (clientes[0].saldo_m >= 601) {
            credito = clientes[0].saldo_m * 0.4;
        } else if (clientes[0].saldo_m >= 401) {
            credito = clientes[0].saldo_m * 0.3;
        } else if (clientes[0].saldo_m >= 201) {
            credito = clientes[0].saldo_m * 0.2;
        } else {
            credito = 0.0;
        }
    }
    else if (nomeCliente == "Pedro") {
        if (clientes[1].saldo_m >= 601) {
            credito = clientes[1].saldo_m * 0.4;
        } else if (clientes[1].saldo_m >= 401) {
            credito = clientes[1].saldo_m * 0.3;
        } else if (clientes[1].saldo_m >= 201) {
            credito = clientes[1].saldo_m * 0.2;
        } else {
            credito = 0.0;
        }
    }
    else if (nomeCliente == "Maria") {
        if (clientes[2].saldo_m >= 601) {
            credito = clientes[2].saldo_m * 0.4;
        } else if (clientes[2].saldo_m >= 401) {
            credito = clientes[2].saldo_m * 0.3;
        } else if (clientes[2].saldo_m >= 201) {
            credito = clientes[2].saldo_m * 0.2;
        } else {
            credito = 0.0;
        }
    }
    else if (nomeCliente == "Luca") {
        if (clientes[3].saldo_m >= 601) {
            credito = clientes[3].saldo_m * 0.4;
        } else if (clientes[3].saldo_m >= 401) {
            credito = clientes[3].saldo_m * 0.3;
        } else if (clientes[3].saldo_m >= 201) {
            credito = clientes[3].saldo_m * 0.2;
        } else {
            credito = 0.0;
        }
    }
    else if (nomeCliente == "Luana") {
        if (clientes[4].saldo_m >= 601) {
            credito = clientes[4].saldo_m * 0.4;
        } else if (clientes[4].saldo_m >= 401) {
            credito = clientes[4].saldo_m * 0.3;
        } else if (clientes[4].saldo_m >= 201) {
            credito = clientes[4].saldo_m * 0.2;
        } else {
            credito = 0.0;
        }
    }

    cout << "O crédito do cliente " << nomeCliente << " é: R$ " << fixed << setprecision(2) << credito << endl;

    return 0;
}
