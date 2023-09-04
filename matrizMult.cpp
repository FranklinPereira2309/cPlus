#include <iostream>

using namespace std;

int main() {
    int c[4][4] {{1,2,3,4}, {5,6}, {6}};

    for(int lin = 0 ;  lin < 4 ; lin++) {
        for(int col = 0; col < 4 ; col++) {
            cout << c[lin][col] << " " ;
        }
        cout << endl;
    }
}