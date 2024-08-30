#include<stdio.h>
#include<math.h>

int main(){
	float a,b,suma,resta,producto,division,potencia,raiz;
	printf("Ingrese 2 numeros:\n");
	scanf("%f %f", &a,&b);
	suma=a+b;
	resta=a-b;
	producto=a*b;
	division=a/b;
	potencia= pow(a,b);
	raiz=pow(a,1/b);
	
	printf("La suma de los numeros es: %.1f",suma);
	printf("\nLa resta de los numeros es: %.1f", resta);
	printf("\nEl producto de los numeros es: %.2f", producto);
	printf("\nLa division de los numeros es: %.2f", division);
	printf("\nLa potencia de %.0f, elevado a %.0f es: %.1f",a,b,potencia);
	printf("\nLa raiz %.0f de %.0f es: %.2f",b,a, raiz);
	
	printf("\n¡Muchas gracias por utilizar este programa!");
	
	return 0;
}