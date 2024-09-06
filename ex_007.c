#include<stdio.h>


int u(int *p, int y){
    printf("%d\n", *(p + y));
}


int main(){
    int myNumbers[4] = {25, 50, 75, 100};
int *ptr = myNumbers;
int i;


for (i = 3; i >= 0; i--) {
  u(ptr, i);
}
return 0;
}
