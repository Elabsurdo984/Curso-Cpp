#include <iostream>

int main() {
    int numeros[] = {1, 2, 3, 4, 5}; //Arreglo de enteros

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}