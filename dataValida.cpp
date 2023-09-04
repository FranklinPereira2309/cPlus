#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {

    char data[11];
    char stringDia[3], stringMes[3], stringAno[5];
    int i, dia, mes, ano;
    
    cout << "Digite uma data no formato(dd/mm/aaaa): ";
    cin.getline(data,11);

    // for(i = 0 ; data[i] != '\0' ; i++ ) {
    //     if(data[i] != '/') {
    //         novaData[i] = data[i];
    //     }

        
    // }
    stringDia[0] = data[0];
    stringDia[1] = data[1];

    stringMes[0] = data[3];
    stringMes[1] = data[4];

    stringAno[0] = data[6];
    stringAno[1] = data[7];
    stringAno[2] = data[8];
    stringAno[3] = data[9];

    dia = stoi(stringDia);
    mes = stoi(stringMes);
    ano = stoi(stringAno);
    

    

    cout << "Dia : " << data[0] << data[1] << endl;
    cout << "Mes : " << data[3] << data[4] << endl;
    cout << "Ano : " << data[6] << data[7] << data[8] << data[9] << endl;

    if(dia > 0 && dia < 32) {
        cout << dia << " É um Dia válido" << endl;
    }else {
        cout << dia << " É um Dia inválido" << endl;
    }

    if(mes > 0 && mes < 13) {
        cout << mes << " => É um Mẽs válido" << endl;
    }else {
        cout << mes << " => É um Mẽs inválido" << endl;
    }

    if(ano > 0) {
        cout << ano << " => É um Ano válido" << endl;
    }else {
        cout << ano << " => É um Ano inválido" << endl;
    }
    // cout << data << endl;



}