#include<stdio.h> 
int main(){
    unsigned int Primer_Numero;
    unsigned int Segundo_Numero;
    unsigned int Resultado_Multiplicar;
    unsigned int Resultado_Dividir;
    /*Introducir los n�meros abajo.*/
    Primer_Numero = 8;
    Segundo_Numero = 2; 
    /*Debido a que las operaciones involucran cambios de bits, es necesario
    considerar que el segundo n�mero que pongamos ser� elevado al cuadrado: por
	ejemplo, si ponemos un dos, el resultado mostrar� operaciones con un cuatro.*/ 
    Resultado_Multiplicar = Primer_Numero << Segundo_Numero;
    Resultado_Dividir = Primer_Numero >> Segundo_Numero; 
    
    printf("El resultado de la multiplicacion es %d \n", Resultado_Multiplicar);
	printf("El resultado de la division es %d \n", Resultado_Dividir); 
}

