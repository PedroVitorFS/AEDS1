#include <stdio.h>

int main(){
    int n=0;
    long int fatorial =1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fatorial *= i;
    }
    printf("%ld", fatorial);
    return 0;
}