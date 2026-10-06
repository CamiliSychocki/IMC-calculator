#include<stdio.h>
#include<math.h>

int main(){
	float peso, altura, IMC;
	printf("digite o peso em Kg");
	scanf("%f", & peso);
	printf ("digite a altura em metros");
	scanf ("%f", & altura);
	IMC = peso/ (altura*altura);
	printf("seu IMC e: %.2f\n", IMC);
	if (IMC < 18.5) {
	printf ("abaixo do peso\n");
    }
    else if (IMC < 25) {
    printf ("peso normal\n");	 
	}
	else if (IMC < 30) {
	printf ("acima do peso");	
	}
}
