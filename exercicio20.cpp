#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i = 1, nota = 0;
    float media = 0.0;

    while(i <= 10) {
        cout << "Digite nota " << i <<  endl;
        cin >> nota;
        i++;
        media += nota;
    }

    cout << "A média foi: " << fixed << setprecision(2) << media/i << endl;
}