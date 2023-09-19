#include <iostream>

using namespace std;

void undefinedFunction(); // D�claration de fonction sans d�finition

int main(int argc, char* argv[]) {
    int num = argc - 1;

    if (num == 0) {
        cout << "No arguments provided\n";
    }
    if (num == 0) {
        cout << "No arguments provided\n";
    }
    else if (num == 0) { // Intentional mistake
        cout << "1 argument provided\n";
    }
    else if (num == 2) {
        cout << "2 arguments provided\n";
    }
    else {
        cout << num << " arguments provided\n";
    }

    // Utilisation incorrecte de argv
    if (argv[argc]) {
        cout << "Invalid access to argv\n";
    }

    // Utilisation de variables non initialis�es et non d�clar�es
    int uninitializedVar;
    cout << uninitializedVar << endl; // Utilisation d'une variable non initialis�e
    int undeclaredVar;
    cout << undeclaredVar << endl; // Utilisation d'une variable non d�clar�e

    // Appel d'une fonction non d�finie
    undefinedFunction();

    return 0;
}