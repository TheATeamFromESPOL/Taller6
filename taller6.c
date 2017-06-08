#include <stdio.h>

void desglosar(char *fecha);
void intercambiar(int a, int b);
int direccion(int *arreglo[]);

int main(void){
	char *fecha= "2017-06-06";
	desglosar(fecha);
}

void desglosar(char *fecha){
	printf("Día: %.*s\n",2,fecha+8);
	printf("Mes: %.*s\n",2,fecha+5);
	printf("Año: %.*s\n",4,fecha+0);

}

void intercambiar(int a, int b){
	
}

int direccion(int *arreglo[]){
	return 0;
}
