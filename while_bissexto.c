#include <stdio.h>

  int main(){
    int ano = 1950;
    int  qtd = 0;
    
    while( ano <= 2024){
        if(ano % 4 == 0){
            printf("o ano %d é bissexto \n",ano);
            qtd++;
        }
        ano++;
    }
    printf("temos %d anos bissextos\n",qtd);
    return 0;
}