#include <stdio.h>

int main(void) {
  float cali[18];
  // aqui se crea un arreglo de las decimas que se les van a quitar a la
  // calificacion
  float deci[18] = {1, 0, -2, 3, 4, 5, -1, 0, 2, 3, 4, 0, -1, 0, 2, 1, 0, 1};
  float *ptr = cali;
  float *ptr2 = deci;
  // se crea un for para poder ingresar las calificaciones
  for (int i = 0; i < 18; i++) {

    printf("ingresa la calificacion %d\n", i + 1);
    scanf(" %f", &*(ptr + i));
  }
  // se crea otro for para poder  imprimir los dotos y sumarles las decimas
  // correspondientes
  for (int i = 0; i < 18; i++) {
    *(ptr2 + i) = *(ptr2 + i) / 10;
    *(ptr + i) = *(ptr + i) + *(ptr2 + i);
    printf("la calificacion %d es %.2f\n", i + 1, *(ptr + i));
  }

  return 0;
}