#include<stdio.h>

int main(){
	float a,b,suma,resta,producto,division;
	printf("Ingrese 2 numeros:\n");
	scanf("%f %f", &a,&b);
	suma=a+b;
	resta=a-b;
	producto=a*b;
	division=a/b;
	
	printf("La suma de los numeros es: %.1f",suma);
	printf("\nLa resta de los numeros es: %.1f", resta);
	printf("\nEl producto de los numeros es: %.2f", producto);
	printf("\nLa division de los numeros es: %.2f", division);
	
	return 0;
}