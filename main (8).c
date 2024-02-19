#include <stdio.h>

int main(void) {
  //en este programa lo que se busca aprender es como 
 int a=10;
  int b=20;
  int resultados;
  int*puntero_a= &a;
  int *puntero_b= &b;
  //suma los valores atraves de los puntero almacenads
  resultados= *puntero_a + *puntero_b;
  //imprimir los valores y resultados
  printf("valor a: %d\n", a);
  printf("valor a: %d\n", b);
  printf("valor resultado: %d\n", resultados);
  //modificar el valor atraves del puntero 
  *puntero_a=30;
  //imprimir nuevos valores de a y b
  printf("valor a: %d\n", a);
  printf("valor a: %d\n", b);
  return 0;
}