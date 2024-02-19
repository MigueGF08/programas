#include <stdio.h>
//funcion de para duplicar cada elemento del arreglo
void duplicarElemento(int *arreglo, int tam){
  for(int i=0; i<tam; i++){
    arreglo[i] = arreglo[i]*2; 
  }
}
void imprimirarre(int *arreglo, int tam){
  for(int i=0; i<tam; i++){
    printf("%d ", arreglo[i]);
  }
}
int main(void) {
  const int tamano = 5;
  int miArreglo[tamano]= {1,2,3,4,5};
  duplicarElemento(miArreglo, tamano);
  imprimirarre(miArreglo, tamano);
  //llamar a la funcion para duplicar elementos
  
  return 0;
}