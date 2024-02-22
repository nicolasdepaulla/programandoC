#include<stdio.h>
int main(){
    int valores[5] = {38,2,3,4,5,};
    int *prt_valores = valores;

//     printf("%d\n",*prt_valores);
//         printf("%p\n",prt_valores);
//         prt_valores++;
        

//  printf("%d\n",*prt_valores);
//         printf("%p\n",prt_valores);


 int i;
 for(i = 1; i <= 5 ; i++){
    printf("o valor é %d e a posição de memória é %p\n",*prt_valores,prt_valores);
    prt_valores++;
 }

     
    return 0;
}