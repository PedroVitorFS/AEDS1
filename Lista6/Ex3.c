#include <stdio.h>

int horasParaSegundos(int horas){
    return horas * 3600;
}

int minutosParaSegundos(int minutos){
    return minutos * 60;
}

int retornaSegundos(int horas, int minutos, int segundos){
    int horasConvertidas = horasParaSegundos(horas);
    int minutosConvertidos = minutosParaSegundos(minutos);
    return (segundos + horasConvertidas + minutosConvertidos);
}

int main(){
    int minutos, horas, segundos;
    scanf("%d %d %d", &segundos, &minutos, &horas);
    printf("%d", retornaSegundos(horas, minutos, segundos));
    return 0;
}