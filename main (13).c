#include <stdio.h>
#include <stdlib.h>
#define MAX_ESTUDIANTES 3
#define MAX_LONGITUD_NOMBRE 50

struct Estudiante{
int numero_registro;
char nombre[MAX_LONGITUD_NOMBRE];
char carrera[MAX_LONGITUD_NOMBRE];
int edad;
};
int main(void) {
//Crear un arreglo de estructuras de tipo Estudiante
  struct Estudiante estudiantes[MAX_ESTUDIANTES];
  printf("Ingrese los datos de los estudiantes:\n");
  for(int i=0; i<MAX_ESTUDIANTES; i++){
    printf("Estudiante %d:\n", i+1);
    printf("Numero de registro: ");
    scanf("%d", &estudiantes[i].numero_registro);
    printf("Nombre (Con espacios entre nombre y apellidos): ");
    scanf(" %[^\n]", estudiantes[i].nombre);
    printf("Carrera: ");
    scanf(" %[^\n]", estudiantes[i].carrera);
    printf("Edad: ");
    scanf(" %d", &estudiantes[i].edad);
    
  }
  for(int i=0; i<MAX_ESTUDIANTES; i++){
    //se imprimen todos los datos recabados
    
    printf("Alumno: %d\nNombre: %s\nNumero De Registro: %d\nCarrera: %s\nEdad: %d\n", i+1, estudiantes[i].nombre,estudiantes[i].numero_registro, estudiantes[i].carrera, estudiantes[i].edad);
  }
  return 0;
}