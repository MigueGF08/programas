#include <stdio.h>
#define MAX_DISP 5
struct DispositivoRed { char tipo[20]; int puertos; char direccionIP[15]; };
int main(void) {
  struct DispositivoRed dispositivoRed1[5];
  struct DispositivoRed *ptrDispositivo;
  for(ptrDispositivo=dispositivoRed1;ptrDispositivo<dispositivoRed1+MAX_DISP;ptrDispositivo++){
    printf("Ingrese el tipo de dispositivo: ");
    scanf("%s",ptrDispositivo->tipo);
    printf("Ingrese la cantidad de puertos: ");
    scanf("%d",&ptrDispositivo->puertos);
    printf("Ingrese la dirección IP: ");
    scanf("%s",ptrDispositivo->direccionIP);
  }
    for(ptrDispositivo=dispositivoRed1;ptrDispositivo<dispositivoRed1+MAX_DISP;ptrDispositivo++){
       printf("Numero: %ld\nTipo: %s\nPuertos: %d\nDireccion IP: %s\n", ptrDispositivo-dispositivoRed1+1, ptrDispositivo->tipo,ptrDispositivo->puertos, ptrDispositivo->direccionIP);
    }
  
  return 0;
}