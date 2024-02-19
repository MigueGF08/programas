#include <stdio.h>

int main(void) {
  //definir variables enteras
  int a=10;
  int b=20;
  //definir punteros a entero y asignarle las direcciones de las variables 
  int *puntero_a=&a;
  int *puntero_b=&b;
  printf("variable a: %d direccion: %d\n", *puntero_a,&puntero_a); 
  printf("variable b: %d direccion: %d\n",*puntero_b ,&puntero_b);

 
  return 0;
}