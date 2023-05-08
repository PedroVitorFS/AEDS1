#include <stdio.h>

int main(){

    int quantidade =0;
    for(int i=1; i<=1000; i++){
        if(i%7 == 0){
            quantidade++;
        }
    }

    printf("A quantidade de numeros divisivel por 7 entre 1 e 1000 eh: %d", quantidade);

    return 0;
}