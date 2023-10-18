#include <iostream>
#include <string>
#include "headers/jogo.h"

using namespace std;

void Jogo::adquirir(const string& titulo, float valor) {
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = valor;
}

void Jogo::atualizar(float valor) {
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo) {
    horas += tempo;
    calcular();
}

void Jogo::exibir() {
    cout << nome << " R$ "
         << preco << " "
         << horas << "/h = R$"
         << custo << "/h\n";
}