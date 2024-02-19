#include <stdio.h>

int main(void) {
 int numeros[]={1,2,3,4,5};
  int *ptr=numeros; //El puntero apunta al primer elemento a
  //imprimir el arreglo a traves de aritmetica de punteros
  printf("Arreglo original\n");
  for(int x=0;x<5;x++){
  printf("%d ",*(ptr+x));
  }
printf("\n");
  for(int x=0;x<5;x++){
    
  printf("%d ",*(ptr+x)+1);
  }
  
  return 0;
}