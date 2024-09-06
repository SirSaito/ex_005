#include <stdio.h>



int soma(int a){
    return a+10;
}




int main(){
    int u;
    printf("Digite um numero:");
    scanf("%d", &u);
    printf("%d", soma(u));
    return 0;
}
