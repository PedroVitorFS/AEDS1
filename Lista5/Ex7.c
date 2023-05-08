#include <stdio.h>

int main(){
    int n =0;
    int fibonnaci =0;
    scanf("%d", &n);
    printf("0 ");
    for(int i=0; i<=(n-2); i++){
        fibonnaci +=i;
        printf("%d ", fibonnaci);
    }
    return 0;
}