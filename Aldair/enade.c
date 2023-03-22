// xi=i+1/i 
// recebe m, n
#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,n;


    puts("M");
    scanf("%d", &m);

    puts("N");
    scanf("%d", &n);


    if(m>n){
        puts("entrada invalida");
        exit(1);
    }


    float res = 1;
    for(int i = m; i <= n; i++)
    res = res * (i + 1/(float)i);
    printf("%2.f\n", res);
    



    return 0;
}