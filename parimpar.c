# include <stdio.h>

int main(){
   int num;
   printf("digite um número: \n");
   scanf("%d,",&num);

   if(num % 2 == 0){
      printf("este número é par \n");
   }
   else{
    printf("este número é impar \n");
   }
   return 0;
}
