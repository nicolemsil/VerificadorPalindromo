#include <stdio.h>
#include <ctype.h>
#include <string.h>


    char digitado[100],
    normal[100],
    contrario[100],
    copia;

    int tamanho; 

int main()
{
    printf(" Digite uma palavra ou frase para saber se é palíndromo: \n");
    scanf("%100[^\n]", digitado);
    
    tamanho = 0; 
    for(int i = 0; digitado[i] != '\0'; i++){ //enquanto a string não terminar...

        copia = toupper(digitado[i]); 

        if(copia >= 'A' && copia <= 'Z'){ 
            normal[tamanho] = copia; //passando letra pro vetor na posição de 'tamanho'
            tamanho++; //aumenta o tamanho conforme percorre o chat
        }
    }
    normal[tamanho] = '\0'; 
    
    
    for (int i = 0; i < tamanho; i++) {
        contrario[tamanho - i - 1] = normal[i];
    }
    contrario[tamanho] = '\0';
    
    if(strcmp(normal, contrario) == 0) //comparação de strings, se for verdadeiro retorna 0
        printf("%s é palíndromo!\n", digitado);
    else
        printf("%s não é palíndromo!\n", digitado);
    
    return 0;
}