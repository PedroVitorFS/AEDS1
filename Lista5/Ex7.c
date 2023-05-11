#include <stdio.h>

int main(){
    int n =0;
    long int soma1 =0;
     long int soma2 =1;
    long int fibonnaci = 0;

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d ", fibonnaci);
        fibonnaci = soma1 + soma2;
        soma2 = soma1; 
        soma1 = fibonnaci;
    }

    return 0;
}