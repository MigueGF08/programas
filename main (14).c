#include <stdio.h>
#include <stdlib.h>

#define MAX_LONGITUD_NOMBRE 50
#define MAX_ESTUDIANTE 3

typedef struct{

int numero_registro;
char nombre[MAX_LONGITUD_NOMBRE];
char carrera[MAX_LONGITUD_NOMBRE];
int edad;

}Estudiante;


int main(void) {

Estudiante estudiantes[MAX_ESTUDIANTE];

  printf("Ingresar datos de los estudiantes:\n");

  for (int i = 0; i < MAX_ESTUDIANTE; i++){

    printf("Alumno %d\nNombre:\n", i+1);
    scanf("%[^\n]", estudiantes[i].nombre);


    printf("\nNúmero de registro:\n");
    scanf("%d", &estudiantes[i].numero_registro);

    printf("\nCarrera:\n");
    scanf("%[^\n]", estudiantes[i].carrera);


    printf("\nEdad:\n");
    scanf("%d", &estudiantes[i].edad);
    system("clear");
  }
  printf("--------------------------\n");
  for (int i = 0; i < MAX_ESTUDIANTE; i++){

    printf("Alumno %d\nNombre: %s\nNumero de Registro: %d\nCarrera: %s\nEdad: %d\n\n", i+1, estudiantes[i].nombre, estudiantes[i].numero_registro, estudiantes[i].carrera, estudiantes[i].edad);

    printf("--------------------------\n");

  }

  return 0;
}