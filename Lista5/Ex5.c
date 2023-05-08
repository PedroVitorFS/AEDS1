#include <stdio.h>

int main(){
    int valor=0;

    scanf("%d", &valor);
    while(valor != 54321){ 
        printf("Acesso Negado \n");
        scanf("%d", &valor);
    }
    printf("Acesso permitido");
    return 0;
}