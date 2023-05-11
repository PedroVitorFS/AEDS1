#include <stdio.h>

int main(){
    int x=  0;
    int y = 0;
    scanf("%d  %d", &x, &y);
    printf("Tabuada de multiplicacao m! \n");
    printf("\t\t|");

    for(int i=x; i<=y; i++){
        printf("\t%d\t", i);
    }
    printf("\n");
    for(int i=0; i<=y-x; i++){
        printf("-----------------");
    }
    printf("\n");

    for(int i=x; i<=y; i++){
        printf("\t%d\t|", i);
        for(int j=x; j<=y; j++){
            printf("\t%d\t", j*i);
        }
        printf("\n");
    }
    return 0;
}