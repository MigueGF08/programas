#include <stdio.h>
int suma1(int x, int y){
  int r;
  r=x+y;
  return r;
}
int resta1(int x, int y){
  int r;
  r=x-y;
  return r;
}
int multiplicacion(int x, int y){
  int r;
  r=x*y;
  return r;
}
int division(int x, int y){
  int r;  
  r=x/y;
  return r;
}
int potencia(int x, int y){
  int r;  
  r=x^y;
  return r;
}

int main(void) {
  int a=3;
  int b=5;
  int suma,resta,mult,pot;
  float dv;
  suma=suma1(a,b);
  resta=resta1(a,b);
  mult=multiplicacion(a,b);
  dv=division(a,b);
  pot=potencia(a,b);
  printf("La suma es: %d\n",suma);
  printf("La resta es: %d\n",resta);
  printf("La multiplicacion es: %d\n",mult);
  printf("La division es: %f\n",dv);
  printf("La potencia es: %d\n",pot);
  
  return 0;
}