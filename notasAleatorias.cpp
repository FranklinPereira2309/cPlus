#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    float notas1[16], notas2[16], media[16], soma, notasRandom;
    srand(time(NULL));

    for(int i = 1 ; i < 16 ; i++) {
        notasRandom = ((float)rand()/RAND_MAX)*i;
        notas1[i -1] = notasRandom;
    }

    for(int j = 1 ; j < 16 ; j++) {
        notasRandom = ((float)rand()/RAND_MAX)*j;
        notas2[j -1] = notasRandom;
    }
    
    for(int i = 0 ; i < 15 ; i++) {
            soma = 0;
            if(notas1[i] > notas2[i] ) {
                soma = notas1[i] + notas2[i];
                media[i] = soma /2; 
                cout << fixed << setprecision(2) << "Nota1: " << notas1[i] << " e Nota2: " 
                << notas2[i] << " ==> Piorou" << " ==> Média: " << media[i] << endl;

            }else if(notas1[i] < notas2[i] ) {
                soma = notas1[i] + notas2[i];
                media[i] = soma /2; 
                cout << fixed << setprecision(2) << "Nota1: " << notas1[i] << " Nota2: " 
                << notas2[i] << " ==> Melhorou" << " ==> Média: " << media[i] << endl;
            }else {
                soma = notas1[i] + notas2[i];
                media[i] = soma /2; 
                cout << fixed << setprecision(2) << "Nota1: " << notas1[i] << " Nota2: " 
                << notas2[i] << " ==> Manteve a nota" << " ==> Média: " << media[i] << endl;
            }
        
    }
    
}