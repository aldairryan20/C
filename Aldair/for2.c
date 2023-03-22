#include <stdio.h>
int i,j;
int main(){
    for(i=0;i<10;i++){
    printf("%d\t:\t", i);
    for(j=0;j<10;j++){
        printf("%d", j);
        j<9? printf(" , "): 1;
    }
    printf("\n");
    }
    return 0;
}