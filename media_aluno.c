/*
neste programa iremos calcular a nota média do aluno.teremos a entrada de 4 notas,depois será feito o cálculo da média,onde iremos somar as notas e depois dividir por 4.
se o aluno tiver uma média acima ou igual a 7,então estará aprovado; caso o aluno de tenha uma nota menor ou igual a 4,então o aluno estará reprovado; caso contrário,estará em recuperação 
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,n4,n5,md;
    printf("digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("digite a terceira nota: \n");
    scanf("%f",&n3);

    printf("digite a quarta nota: \n");
    scanf("%f",&n4);

    md=(n1+n2+n3+n4) / 4;

    printf("a nota média do aluno é %2.2f\n",md);

    if(md >= 7 ){
        printf("aprovado \n");
    }
    else if( md <= 4 ){
        printf("reprovado \n");
    }
    else{
        printf("recuperação \n");
    }
    return 0;
    
}