#include <stdio.h>

int main(void) {
  //definir una variable entera
  int numero=42;
 int *puntero=&numero;
  printf("puntero: %d\n" , *puntero);
  scanf("%d",puntero);
  printf("Puntero: %d" , *puntero);
  return 0;
}