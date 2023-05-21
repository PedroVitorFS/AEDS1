#include <stdio.h>

int operacaoAritmetica(int a, int b, char operacao){
    if(operacao == '+'){
        return a +b;
    }else if(operacao == '-'){
        return a-b;
    }else if(operacao == '*'){
        return a*b;
    }else if(operacao == '/'){
        return a/b;
    }
}

int main(){
    int a,b;
    char operacao;
    scanf("%d %d %c", &a, &b, &operacao);
    printf("%d", operacaoAritmetica(a, b, operacao));
    return 0;
}