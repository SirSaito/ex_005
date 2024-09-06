#include<stdio.h>


int sub(int y){
    return y - 5;
}


int main(){
    int r, *t;
    printf ("Digite um numero");
    scanf("%d", &r);
    t=&r;
    printf("%d", sub(*t));
    return 0;
}
