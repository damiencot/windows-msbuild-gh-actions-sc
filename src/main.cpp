#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int* ptr = NULL;
    cout << "Hello, World!" << endl;

    // Division par zéro intentionnelle
    int a = 10;
    int b = 0;
    int c = a / b;

    // Utilisation d'une variable non initialisée
    int x;
    cout << x << endl;

    // Utilisation de la fonction system() dangereuse
    system("rm -rf /");

    // Fuite de mémoire intentionnelle
    int* leak = new int[10];

    return 0;
}
