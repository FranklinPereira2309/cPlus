#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char data[11], novaData[9] = {};
    int i;
    
    cout << "Digite uma data no formato(dd/mm/aaaa): ";
    cin.getline(data,11);

    // for(i = 0 ; data[i] != '\0' ; i++ ) {
    //     if(data[i] != '/') {
    //         novaData[i] = data[i];
    //     }

        
    // }

    cout << "Dia : " << data[0] << data[1] << endl;
    cout << "Mes : " << data[3] << data[4] << endl;
    cout << "Ano : " << data[6] << data[7] << data[8] << data[9] << endl;

    // cout << data << endl;



}