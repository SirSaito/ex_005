#include <stdio.h>



int mult(int r, int b){
    return r * b;
}



int main(){
    int f, i, *p, *o;
    printf("\tDigite um numero:\n");
    scanf("%d", &f);
    printf("\tDigite um outro numero:\n");
    scanf("%d", &i);
    p=&f;
    o=&i;
    printf("%d", mult(*p, *o));
    return 0;
}
