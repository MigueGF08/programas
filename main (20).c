#include <stdio.h>

void sumarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[3][3] = {{8, 9, 3}, {5, 1, 2}, {1, 8, 4}};
    int matriz2[3][3] = {{3, 2, 1}, {9, 5, 0}, {0, 0, 0}};
    int resultado[3][3];

    sumarMatrices(matriz1, matriz2, resultado);

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2);

    printf("\nResultado de la suma:\n");
    imprimirMatriz(resultado);

    return 0;
}