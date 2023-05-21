#include <stdio.h>

float converterTemperatura(float temperatura){
    float C = (temperatura -32.0)*(5.0/9.0);
    return C;
}

int main(){
    float temperatura;
    scanf("%f", &temperatura);
    printf("%.2f", converterTemperatura(temperatura));
    return 0;
}