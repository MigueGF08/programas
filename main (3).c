#include <stdio.h>

int main() {
    // Declarar el vector de 1000 enteros
    int numeros[1000];

    // Inicializar el vector con algunos valores (puedes ingresar tus propios valores)
    for (int i = 0; i < 1000; i++) {
        *(numeros + i) = i - 500; // Ejemplo: valores desde -500 hasta 499
    }

    // Declarar un puntero para recorrer el vector
    int *ptr = numeros;

    // Recorrer el vector y modificar los enteros negativos cambiando el signo
    for (int i = 0; i < 1000; i++) {
        if (*ptr < 0) {
            *ptr = -*ptr; // Cambiar el signo
        }
        ptr++; // Mover el puntero al siguiente elemento
    }

    // Imprimir el vector modificado
    ptr = numeros; // Reiniciar el puntero al principio del vector
    for (int i = 0; i < 1000; i++) {
        printf("%d ", *ptr);
        ptr++; // Mover el puntero al siguiente elemento
    }

    return 0;
}