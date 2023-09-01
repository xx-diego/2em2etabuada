#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int numero;
    char resposta;
    
    printf("Bem vindo ao informativo numerico!\n");

while (1) { // comando para repetir
        
        printf("Digite um numero: ");
        scanf("%d", &numero);

        printf("\n"); //quebra de linha entre as respostas

        // antecessor e o sucessor
        printf("Antecessor: %d\n", numero - 1);
        printf("Sucessor: %d\n", numero + 1);

        printf("\n");

        //multiplicacao
        printf("Tabuada de %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\n");

        //prox 3 de 2 em 2
        printf("Tres proximos numeros na contagem de 2 em 2:\n");
        for (int i = 1; i <= 3; i++) {
            numero += 2;
            printf("%d\n", numero);


        }

        printf("\n");

        printf("Repetir? (S/N): ");
        scanf(" %c", &resposta); // usar o espaco antes do %c para carregar sem buffer

        if (resposta != 'S' && resposta != 's') {
            break; 
        }
    }

    return 0;
}


