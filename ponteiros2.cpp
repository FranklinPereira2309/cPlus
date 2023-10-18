#include <iostream>

using namespace std;

struct jogador {
    string nome;
    float salario;
    int gols;
};

void exibirJogador(jogador * ptr) {
    
    cout << ptr->gols << endl;
    ptr->gols = 1000;
}

void exibir(jogador j) {
   cout << j.gols ;
   j.gols = 200;
   cout << j.gols << endl;
}

int main() {
    jogador novato = {"julinho", 200, 2};

    //exibirJogador(&novato);
    cout << novato.gols << endl;
    exibir(novato);
      
};