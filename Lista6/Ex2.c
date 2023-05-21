#include <stdio.h>
#include <math.h>

float volumeEsfera(float raio){

    float V = (4.0/3.0) * 3.14 * pow(raio,3.0);
    return V;
}

int main(){
    float raio;
    scanf("%f", &raio);
    printf("%.2f", volumeEsfera(raio));
    return 0;
}