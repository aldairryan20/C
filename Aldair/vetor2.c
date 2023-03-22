//fazer um vetor e inverte-lo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define QTD 3
#define SFT 0
int main(){
    int v[TAM];
    for(int k=0; k<TAM; k++) v[k] = (rand() % QTD) + SFT;
    int y[TAM];
    for(int k=0; k<TAM; k++) printf("[%d] v: ");

    return 0;
}