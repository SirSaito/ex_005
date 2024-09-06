#include <stdio.h>



int maiormenor(int a, int b){
    return a*b;
}




int main(){
    int u, y;
    printf("Digite um numero:");
    scanf("%d", &u);
    printf("Digite um outro numero:");
    scanf("%d", &y);
    printf("%d", maiormenor(u, y));
    return 0;
}

