#include <stdio.h>

int main(){

    int n;
    char x;

    scanf("%c %d", &x, &n);
    printf("\n");

    for(int i=1; i<=n; i++){
        if(i==n)printf("%c.", x);
        else printf("%c,", x);
    }
    return 0;
}