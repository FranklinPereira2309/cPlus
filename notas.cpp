#include <iostream>

using namespace std;

int main() {
    int nota;
    int exit = 1;

    while(exit == 1) {
    cout << "Digite uma nota(0 a 10): ";
    cin >> nota;
    cout <<"Deseja sair(0)? ";
    cin >> exit;

    switch (nota)
    {
    case 10:
        cout << "Conceito A\n";
        break;
    case 9:
        cout << "Conceito A\n";
        break;
    case 8:
        cout << "Conceito B\n";
        break;
    case 7:
        cout << "Conceito B\n";
        break;
    case 6:
        cout << "Conceito C\n";
        break;
    case 5:
        cout << "Conceito C\n";
        break;
    case 4:
        cout << "Conceito D\n";
        break;
    case 3:
        cout << "Conceito D\n";
        break;
    
    default:
        cout << "Conceito F\n";
        break;
    }

    }

    return 0;
}