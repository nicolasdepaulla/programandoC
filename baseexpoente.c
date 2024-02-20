#include <stdio.h>
int main(){
    int base, exp, i;
    int b;
    printf("digite um número para a base:\n");
    scanf("%d",&base);

    printf("digite um número para o expoente:\n");
    scanf("%d",&exp);
    
    b=base;

    for(i = 1; i; < exp ; i++){
        // base *= b;
        base = base * b;
    }
       printf("%d\n",base);



    return 0;

}