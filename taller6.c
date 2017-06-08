#include <stdio.h>

void desglosar(char *fecha);
void intercambiar(int *a, int *b);
int direccion(int *arreglo[]);

int main(void){
	int a=2;
	int b=3;
	char *fecha= "2017-06-06";
	desglosar(fecha);
	intercambiar(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
}

void desglosar(char *fecha){
	printf("Día: %.*s\n",2,fecha+8);
	printf("Mes: %.*s\n",2,fecha+5);
	printf("Año: %.*s\n",4,fecha+0);

}

void intercambiar(int *a, int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
}
	

int direccion(int *arreglo[]){
	return 0;
}
