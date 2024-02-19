#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// esta funcion es para que el programa sepa que hay que usar la funcion random
// y nos llene los arreglos de manera aleatoria
void aleatorio(int arreglo[], int tamano) {
  srand(time(NULL));
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = rand() % 100;
  }
}
// esta funcion es para que el usuario ingrese los datos que van a ir dentro de
// los arreglos
void llenarArreglo(int arreglo[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    printf("Ingrese el valor de la posicion %d: ", i);
    scanf("%d", &arreglo[i]);
  }
}
// esta funcion lo que hace es que imprime el arreglo para que el usuario lo pueda ver 
void imprimirArreglo(int arreglo[], int tamano) {

  for (int x = 0; x < tamano; x++) {
    printf("En posicion %d el valor es %d\n", x, arreglo[x]);
  }
}
void ordenarBurbuja(int arreglo[], int tamano) {
  for (int y = 0; y < tamano - 1; y++) {
    for (int o = 0; o < tamano - y; o++) {
      if (arreglo[o] > arreglo[o + 1]) {
        int temp = arreglo[o];
        arreglo[o] = arreglo[o + 1];
        arreglo[o + 1] = temp;
      }
    }
  }
}
int main(int argc, char *argv[]) {

  int tamano;
  // pedir al usuario que ingrese el tamaño del arreglo
  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &tamano);

  int arreglo[tamano];
  aleatorio(arreglo, tamano);
  //printf("Arreglo original: ");
 // imprimirArreglo(arreglo, tamano);
  clock_t start = clock();
  ordenarBurbuja(arreglo, tamano);
  //printf("Arreglo ordenado");
  //imprimirArreglo(arreglo, tamano);
  printf("Tiempo transcurrido en segundos: %f",
         ((double)clock() - start) / CLOCKS_PER_SEC);
  return 0;
}