#include <iostream>

using namespace std;

// Función recursiva con 4 parámetros para resolver las Torres de Hanói
void torresHanoi(int n, int origen, int destino, int auxiliar) {
    // Caso base: si solo queda un disco, lo movemos directamente
    if (n == 1) {
        cout << origen << " -> " << destino << endl;
        return;
    }

    // Mover n-1 discos de la varilla de origen a la auxiliar, usando la de destino
    torresHanoi(n - 1, origen, auxiliar, destino);

    // Mover el disco más grande directamente de la varilla de origen a la de destino
    cout << origen << " -> " << destino << endl;

    // Mover los n-1 discos de la varilla auxiliar a la de destino, usando la de origen
    torresHanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int nDiscos;
    cout << "Introduce el numero de discos: ";
    cin >> nDiscos;

    cout << "\nSecuencia de movimientos:" << endl;
    // Llamamos a la función indicando:
    // - nDiscos: cantidad de discos a trasladar
    // - 1: varilla inicial (origen)
    // - 3: varilla final (destino)
    // - 2: varilla temporal (auxiliar)
    torresHanoi(nDiscos, 1, 3, 2);
    

    return 0;
}
//Código realizado con ayuda de Contenido de Youtube.
