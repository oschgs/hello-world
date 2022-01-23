#include<stdio.h>
int soma(int x, int y)
{
    return x+y;
}
int media(int x, int y)
{
    return (x+y)/2;
}
int maior(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
main()
{
    int a,b;
    printf("Digite um valor.\n");
    scanf("%d",&a);
    printf("Digite outro um valor.\n");
    scanf("%d",&b);
    printf("Valor da soma: %d\n", soma(a,b));
    printf("Media: %d\n",media(a,b));
    printf("O maior numero: %d",maior(a,b));
}