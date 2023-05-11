#include <stdio.h>

int main(){
    int x=0;
    int soma_divisores = 0;
    scanf("%d", &x);

    for(int i=1; i<x; i++){
        if(x%i ==0){
            soma_divisores += i;
        }
    }

    printf("%d", soma_divisores);

    return 0;
}