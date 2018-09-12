#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADPilaEst.h"

#define TAM_MAX 100

void pedir_cadena(char A[TAM_MAX], int tam);
void validar_parentesis(char cadena[TAM_MAX], int tam, elemento e, pila Pi);
void ordenar(char A[TAM_MAX], int tam);




int main(void){

	pila Pi;
	elemento e;
	int tam;
	char A[TAM_MAX];
	Initialize(&Pi);
	printf("Hola\n");
	pedir_cadena(A, tam);
	validar_parentesis(A, tam, e, Pi);
	
	


}

void pedir_cadena(char A[TAM_MAX], int tam){
	printf("Hola guapo\n");
	printf("Dame una cadena con las operaciones\n");
	scanf("%s", A);
	tam:strlen(A);

}
void ordenar(char A[TAM_MAX], int tam){
	int i;	
	for(i=0; i<tam;i++){
							
	}
	
}

void validar_parentesis(char cadena[TAM_MAX], int tam, elemento e, pila Pi){
	int i;

	for(i=0;i<tam;i++){

		if(cadena[i]=='('){
				e.c='(';
				Push(&Pi,e);
		}
				
		else if(cadena[i]==')') //se hace un pop a la pila
			{
				//Si se intenta extraer un elemento y la pila es vacia
				if(Empty(&Pi))
				{
					printf("ERROR: Existen mas parentesis que cierran de los que abren");
					exit(1); //Salir del programa con error
				}
				e=Pop(&Pi);
			}
	}
	
	//Si al terminar de revisar la expresión aún hay elementos en la pila Error: P.g. (a+b)*c(a-c
	if(!Empty(&Pi))
	{
		printf("ERROR: Existen mas parentesis que abren de los que cierran");
		exit(1); //Salir del programa con error
	}

}
