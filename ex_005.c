#include <stdio.h>



int sub(int y){
    return y-5;
}



int main(){
    int f;
    printf("Digite um numero");
    scanf("%d", &f);
    printf("%d", sub(f));
}
