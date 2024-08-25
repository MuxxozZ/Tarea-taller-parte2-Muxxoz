#include<stdio.h>

int main(){
	int a,b,suma,resta;
	printf("Ingrese 2 numeros naturales");
	scanf("%d %d", &a,&b);
	suma=a+b;
	resta=a-b;
	
	printf("La suma de los numeros es: %d\n",suma);
	printf("La resta de los numeros es: %d", resta);
	
	return 0;
}