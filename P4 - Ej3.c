#include<stdio.h> 
int main(){
	/*Indicar el número N abajo.*/
	int Valor_N = 12;
	int i = Valor_N;
	/*Inicializar el valor en cero.*/
    int Cuadrado = 0;
    int Contador;
    /*A continuación, en todo bit que sea uno, se irán sumando
    sus respectivos valores, dando como resultado el cuadrado.*/
        while(i > 0){
            if((i & 1) == 1){
                Cuadrado += Valor_N << Contador;
            }
            i = i >> 1;
            Contador++;
        }
        printf("El cuadrado es %d", Cuadrado);
        return Cuadrado;
    }