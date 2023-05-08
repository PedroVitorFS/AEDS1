#include <stdio.h>

int main(){
    int valor,qtd= 0;
    int soma = 0;
    int media = 0;
    while(valor >= 0){
        scanf("%d", &valor);
        if (valor >=0){
            soma += valor;
            qtd++; 
        }  
    }

    media = soma/qtd;
    printf("Quantidade ");
    printf("%d \n", qtd);
    printf("Media ");
    printf("%d", media);

    return 0;
}