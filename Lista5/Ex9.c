#include <stdio.h>


int main(){
    int x = 0;
    int qtd = 0;
    int soma = 0;
    int maior =0;
    int menor = 0;
    int qtdimpares = 0;
    float porcentagem = 0.0;

    scanf("%d", &x);

    while(x!=0){
        qtd++;
        if(x<0){
            printf("O numero nao sera considerado no calculo \n");
        }else{
            soma += x;
            
            if(x>maior){
                maior = x;
            }
            if (x<menor || menor == 0){
                menor = x;
            }

            if(x%2 != 0){
                qtdimpares++;
            }
        }

        scanf("%d", &x);
    }

    porcentagem =  ( (float) qtdimpares/ (float) qtd)*100.0;
    
    printf("A soma de todos os numeros eh: %d \n", soma);
    printf("A quantidade de numeros digitados eh: %d \n", qtd);
    printf("O maior numero inteiro eh: %d \n", maior);
    printf("O menor numero inteiro eh: %d \n", menor);
    printf("A porcentagem de numero impares digitados eh: %.2f", porcentagem);

    return 0;
}