#include <iostream>

using namespace std;

int main()
{
    char a = 'a';
    cout << "Digite um caractere: " << endl;
    
    cout << hex << "O valor em é " << static_cast<unsigned int>(a) << endl;
    return 0;
}