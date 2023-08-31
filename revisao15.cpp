#include <iostream>

using namespace std;

int main() {
    int a,b;
    long int c;
  
    

    cout << "Digite o primeiro valor inteiro: \n";
    cin >> a;
    cout << "Digite o segundo valor inteiro: \n";
    cin >> b;

    
    c = a + b;
    cout << "O valor da soma é " << c << endl;
    
    cout << "O valor em Hexadeciamal é: " << hex << c << endl;

    c = a * b;
    cout << "O valor do produto é " << c << endl;

    cout << "O valor em Octa é: " << oct << c << endl;
    
    
    return 0;
    
}

