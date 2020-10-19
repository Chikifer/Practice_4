#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <string.h>     
#include <stdlib.h>     

int *Arreglo, Contador = 0;

void Conversion_Binario(int a, int n)
{
    /*En esta primera parte, se est�n generando los espacios que tendr� el
    c�digo Grey, dependiendo del valor de entrada.*/
	static char b[9];
    b[0] = '\0';

    int c;
    for (c = 128; c > 0; c >>= 1)
    {
        strcat(b, ((a & c) == c) ? "1" : "0");
    }
    int i = 8 - n;
	while(i < 8){
    	printf("%c", b[i]);
    	i++;
    }
}
int Codigo_Grey(int n)
{
	/*Desde este punto, se est� modificando el arreglo para que
	todo quede en valores de binario.*/
	int k, i;
	Arreglo[Contador++] = 0;
	Arreglo[Contador++] = 1;
	for(i = 1; i < n; i++){
		k = Contador - 1;
		while(k >= 0){
			Arreglo[Contador++] = Arreglo[k--] | 1 << i;
		}
	}	
} 
main()
{
	int n, i;
	printf("\nEscribe el valor de n\n");
	scanf("%d",&n);
	Arreglo = (int*)malloc(pow(2,n)*sizeof(int));
	Codigo_Grey(n);
	/*Aqu� los ir� acomodando en los espacios generados anteriormente.*/
	for(i = 0; i < Contador; i++){
		Conversion_Binario(Arreglo[i], n);
		printf("\n");
	}
}

