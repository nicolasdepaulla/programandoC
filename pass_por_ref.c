#include <stdio.h>
int subtrair(int *x, int *y)
{
    printf("posição x %p e Posição y %p\n",x,y);
    return *x - *y;
}
int main()
{
    int v1 = 10;
    int v2 = 5;
    printf("posição de v1 %p e Posição de v2 %p\n",&v1,&v2);
    int rs = subtrair(&v1, &v2);
    printf("o resultado é %d \n", rs);
    return 0;
}
