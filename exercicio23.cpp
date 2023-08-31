#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i = 0, nota = 0;
    float media = 0.0;
    int sair = 0;

    while(sair == 0) {
        i++;
        cout << "Digite nota " << i << " Ou para sair Digite (-1)" << endl;
        cin >> nota;

        if(nota >= 0 && nota <= 100) {

            // cout << "Deseja continuar(Sair 1)? " << endl;
            // cin >> sair;
            media += nota;
        }else if(nota < 0) {
            sair = 1;
        }else {
            cout << "Número inválido! Verifique sua digitação" << endl;
        }
    }

    // system("cls");
    --i;
    cout << "A média foi: " << fixed << setprecision(2) << media/i << endl;
}