#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int* ptr = NULL;
    cout << "Hello, World!" << endl;

    // Division par z�ro intentionnelle
    int a = 10;
    int b = 0;
    int c = a / b;

    // Utilisation d'une variable non initialis�e
    int x;
    cout << x << endl;

    // Utilisation de la fonction system() dangereuse
    system("rm -rf /");

    // Fuite de m�moire intentionnelle
    int* leak = new int[10];

    return 0;
}
