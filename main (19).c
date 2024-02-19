#include <stdio.h>
#include <stdlib.h>
#define MATF 3
#define MATC 3

int main(void) {

  int matriz[MATF][MATC];
  int matriz1[MATF][MATC];
  int matres[MATF][MATC];


  printf("Matriz 1\n");
  for(int i=0;i<MATF;i++)
  {
    for(int j=0; j<MATC; j++)
    {
      printf("Elemento [%d][%d]: ",i+1, j+1);
      scanf("%d", &matriz[i][j]);
      system("clear");
    }
  }

  printf("Matriz 2\n");
  for(int i=0;i<MATF;i++)
  {
    for(int j=0; j<MATC; j++)
    {
      printf("Elemento [%d][%d]: ",i+1, j+1);
      scanf("%d", &matriz1[i][j]);
      system("clear");
    }
  }

  //Sumar

  printf("Matriz 2\n");
  for(int i=0;i<MATF;i++)
  {
    for(int j=0; j<MATC; j++)
    {

      matres[i][j] = matriz[i][j] + matriz1[i][j];

    }
  }
  system("clear");

  //Imprimir la matriz
printf("MATRIZ:\n\n");
  for(int i=0;i<MATF;i++)
  {
    for(int j=0; j<MATC; j++)
    {
      printf("[%d]",matres[i][j]);

    }
    printf("\n");
  }

  return 0;
}

