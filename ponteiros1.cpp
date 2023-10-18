#include <iostream>

using namespace std;

int main() {
    char nome[20] = "joaozinho";

    char * ptr = &nome[1];
    *ptr = 'P';
    //cout << ptr;

    nome[0] = 'T';
    *ptr = 'i';
    cout << nome ;
   
   
};