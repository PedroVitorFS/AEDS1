#include <stdio.h>

int mdc(int x, int y){
    int divisorx = 0;
    int divisory = 0;
    int menornumero = 0;
    if(x-y >0){
        menornumero = x;
    }else{
        menornumero =y;
    }
    for(int i=menornumero; i>=1; i--){
        if(y%i == 0 && x%i == 0){
            return i;
        }
    }
}

int main(){
    int x=0;
    int y=0;
    scanf("%d %d", &x, &y);
    int mdcxy = mdc(x, y);
    if(mdcxy == 1){
        printf("Sao primos entre si");
    }else{
        printf("Nao sao primos entre si");
    }
    return 0;
}

