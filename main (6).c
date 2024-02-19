#include <stdio.h>

struct punto{
int x;
int y;
}; 

int main(void) {
 //tipos de datos simples 
  printf("sizeof(char) = %zu bytes\n", sizeof(char));

  printf("sizeof(int) = %zu bytes\n", sizeof(int));

  printf("sizeof(float) = %zu bytes\n", sizeof(float));

  printf("sizeof(double) = %zu bytes\n", sizeof(double));
  //Tipos de datos modificadores

  printf("sizeof(short) = %zu Bytes\n", sizeof(short));
  printf("sizeof(long) = %zu Byte\n", sizeof(long));
  printf("sizeof(long long) = %zu Byte\n", sizeof(long long));
  
 printf("sizeof(Punto): %zu Bytes\n", sizeof(struct punto));
  
  return 0;
}