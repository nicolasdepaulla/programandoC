# include <stdio.h>

int main(){
   int ano;
   printf("digite um número: \n");
   scanf("%d,",&ano);

   if(ano % 4 == 0){
      printf("este ano é bissexto \n");
   }
   else{
    printf("este ano não é bissexto \n");
   }
   return 0;
}
