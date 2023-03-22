#include <stdio.h>
#define GOW 20
int main(){
    double notas[GOW], soma = 0, media;
    int k;
    for(k=0; k<GOW; k++){
        puts("digite a nota");
    scanf("%lf", &notas[k]);
    soma += notas[k];
    }
    media = soma / GOW;
    printf("%lf", media);

    return 0;
}