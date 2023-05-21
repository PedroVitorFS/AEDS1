#include <stdio.h>
#include "fatoracao.h"

int main(){
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    printf("eh primo: %d \n", eh_primo(n));
    printf("mdc: %d \n", mdc(x, y));
    printf("mmc: %d \n", mmc(x, y));
    return 0;
}