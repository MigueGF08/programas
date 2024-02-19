#include <stdio.h>
#include <string.h>
struct elementos{
char nombre[50];
int cantidad;
float precio;
};
int main(void) {
   struct elementos reactivo;
  strcpy(reactivo.nombre, "reactivoA");
  reactivo.cantidad= 10;
  reactivo.precio=12.50;
  struct elementos *ptr_reactivo=&reactivo;
  printf("El nombre del reactivo es: %s\n",ptr_reactivo->nombre);
  printf("El nombre del reactivo es: %d\n",ptr_reactivo->cantidad+5);
  printf("El nombre del reactivo es: %.2f\n",ptr_reactivo->precio);

  struct elementos reactivo2[10];
  return 0;
}