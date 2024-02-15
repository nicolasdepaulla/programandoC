#include<stdio.h>
int main(){
    float soma;
    float nota01;
    float nota02;
    float nota03;
    float nota04;
    printf("digite a primeira nota\n");
    scanf("%f",&nota01);

    printf("digite a segunda nota\n");
    scanf("%f",&nota02);

    printf("digite a terceira nota\n");
    scanf("%f",&nota03);

    printf("digite a quarta nota\n");
    scanf("%f",&nota04);

    soma = (nota01 + nota02 + nota03 + nota04)/4;
     
    printf("a média da soma das notas é: %.2f\n",soma);
    return 0;
}