#include <iostream>

using namespace std;

int main() {
    double x, y, z, fx;

    cout << "Digite x: ";
    cin >> x;
    cout << "Digite y: ";
    cin >> y;

    fx  = (5 * x) + 2;

    
    cout << ((y < fx) ? "Lado Direita\n": "");
    cout << ((y == fx) ? "Na Curva\n": "");
    cout << ((y < fx) ? "Lado Esquerda\n": "");

      
    return 0;
}