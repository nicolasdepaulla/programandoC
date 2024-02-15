#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;
    printf("digite um número e tecle enter\n");
    scanf("%d",&n1);

    printf("digite outro número e tecle enter\n");
    scanf("%d",&n2);

    soma =  n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("o resultado da soma é %d\n",soma);
    printf("o resultado da subtrção é %d\n",subtrair);
    printf("o resultado da multiplicação é %d\n",multiplicar);
    printf("o resultado da divisão é %d\n",dividir);
    return 0;
}