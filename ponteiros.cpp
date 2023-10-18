#include <iostream>

using namespace std;

int main() {
    char animal[10] = "tigre";
    //cout << animal;

    char * ptr = animal;
    *ptr = 'T';
    cout << animal;

    ptr = &animal[2];

    //cout << ptr;
   
};