/*
_________________________________________________
#include<stdio.h>
main()
{
    int mat[2][2],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor.\n");
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mat[i][j]);
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;i++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;i++)
        {
            printf("Digite um valor\n");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("%d\t",c[i][j]);
}  
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;i<2;j++)
        {
            c[i][j]= a[i][j]+b[i][j];
            if(c[i][j]%2==0)
            {
                printf("Valor Par\n");
            }
            else
            {
                printf("Valor Impar\n");
            } 
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[4][4],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Valores com coordenadas iguais:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                printf("%d\n",a[i][j]);
            }
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[4][4],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Valores Impares\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]%2!=0)
            {
                printf("%d\n",a[i][j]);
            }
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[4][4],i,j,cont=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Valores Impares\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]%2==0)
            {
                cont++;
            }
        }
    }
    printf("Quantidade de valores pares: %d\n",cont);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int a[4][4],i,j;
    float cont=0, soma=0, media;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Digite um valor\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[4][4]%2!=0)
            {
                cont++;
                soma=soma+a[4][4];
            }
        }
    }
    media=soma/cont;
    printf("Media dos valores impares: %.2f\n",media);
}
_________________________________________________
#include<stdio.h>

int soma(int a, int b, int c)
{
    return a+b+c;
}
main()
{
    int x, y, z, tot;

    printf("Digite um valor\n");
    scanf("%d",&x);
    printf("Digite um valor\n");
    scanf("%d",&y);
    printf("Digite um valor\n");
    scanf("%d",&z);

    tot= soma(x,y,z);
    printf("Resultado: %d",tot);
    //printf("Resultado: %d",soma(x,y,z));
}
/////////////////////////////////////////////////

#include<stdio.h>

float media(float a, int b)
{
    return a/b;
}
float soma(float a, float b, float c, float d)
{
    return a+b+c+d;
}
main()
{
    float w, x, y, z, tot, m;

    printf("Digite um valor\n");
    scanf("%d",&w);
    printf("Digite um valor\n");
    scanf("%d",&x);
    printf("Digite um valor\n");
    scanf("%d",&y);
    printf("Digite um valor\n");
    scanf("%d",&z);

    tot= soma(w,x,y,z);
    m= media(tot, 4);

    printf("Resultado: %.2f", tot);
}
/////////////////////////////////////////////////

#include<stdio.h>

int parimpar(int a)
{
    if(a%2==0)
    {
        printf("Par\n");
        //return 0;
    }
    else
    {
        printf("Impar\n");
        //return 1;
    }
}
main()
{
    int x;//res,

    printf("Digite um valor\n");
    scanf("%d",&x);

    parimpar(x);
    //res= parimpar(x);

    //if(res==0)
    //{
    //  printf("Par\n");     
    //}
    //else
    //{
    //  printf("Impar\n"); 
    //}
}
/////////////////////////////////////////////////

#include<stdio.h>

int soma(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mult(int a, int b)
{
    return a*b;
}
main()
{
    int x,y

    printf("Digite um valor\n");
    scanf("%d",&x);
    printf("Digite um valor\n");
    scanf("%d",&y);

    printf("Soma: %d/n",soma(x,y));
    printf("Subtracao: %d\n",sub(x,y));
    printf("Multiplicacao: %d\n",mult(x,y));
}
/////////////////////////////////////////////////

#include<stdio.h>

int teste(int a)
{
    if(a>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
main()
{
    int x, res;
    printf("Digite um numero\n");
    scanf("%d",&x);

    res= teste(x);
    if(res==1)
    {
        printf("Negativo\n");
    }
    else
    {
        printf("Positivo\n");
    }
}

/////////////////////////////////////////////////

#include<stdio.h>

int idade(int a, int b)
{
    return b-a;
}
main()
{
    int x, atual, res;

    printf("Digite o ano de nascimento\n");
    scanf("%d",&x);
    printf("Digite o ano atual\n");
    scanf("%d",&atual);

    res= idade(x,atual);
    printf("Sua idade: %d\n",res);
}
/////////////////////////////////////////////////

#include<stdio.h>

int parimpar(int a)
{
    if(a%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
main()
{
    int x, res, i;

    for(i=0;i<6;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&x);

        res= parimpar(x);
        if(res==0)
        {
            printf("%d\n",x*2);
        }
        else
        {
            printf("%d\n",x*3);
        }
    }
}
_________________________________________________
#include<stdio.h>
int_maiormenor(int a, int b)
{
    int idade;
    idade= b-a;
    if(idade>=18)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
main()
{
    int ano, atual, i, res;
    for(i=0;i<4;i++)
    {
        printf("Digite o ano de nascimento\n");
        scanf("%d",&ano);
        printf("Digite o ano atual\n");
        scanf("%d",&atual);
    }
}
/////////////////////////////////////////////////

#include<stdio.h>

int maiormenor(int a)
{
    if(a>=18)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
main()
{
    int idade, i, res, cont=0;
    for(i=0;i<4;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d",&idade);

        res= maiormenor(idade);
        if(res==0)
        {
            cont++;
        }
    }
    printf("Maiores de idade: %d",cont);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x, i, res, soma=0, cont=0;
    for(i=0;i<4;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&x);
        res= parimpar(x);

        if(res==0)
        {
            soma= soma+x;
        }
        else
        {
            cont++;
        }
    }
    printf("Soma dos pares: %d\n",soma);
    printf("Quantidade dos impares: %d",cont);
}
/////////////////////////////////////////////////

#include<stdio.h>

float media(float a, float b)
{
    return (a+b)/2;
}
main()
{
    int i;
    float n1, n2, m;

    for(i=0;i<4;i++)
    {
        printf("Digite a primeira nota\n");
        scanf("%d",&n1);
        printf("Digite a primeira nota\n");
        scanf("%d",&n2);

        m= media(n1,n2);

        printf("media: %.2f",m);
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
int teste(int a)
{
    int x;

    if(a>0)
    {
        x=0;
    }
    else
    if(a<0)
    {
        x=1;
    }
    else
    {
        x=2;
    }
    return x;
}
main()
{
    int i,n,res;

    for(i=0;i<4;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&n);

        res= teste(n);
        if(res==0)
        {
            printf("Positivo");
        }
        else
        if(res==1)
        {
            printf("Negativo");
        }
        else
        {
            printf("Igual a zero\n");
        }
    }
}
_________________________________________________
#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
imprime(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("%d\n",a[i]);
    }
}
main()
{
    int vet[4];
    preenche(vet,4);
    imprime(vet,4);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
int pares(int a[], int b)
{   
    int cont=0;
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        {
            cont= cont+a[i];
        }
    }
    return cont;
}
main()
{
    int vet[4], res;
    preenche(vet,4);
    res= pares(vet,4);
    printf("Quantidade dos pares: %d",res);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
int impares(int a[], int b)
{   
    int cont=0;
    for(i=0;i<b;i++)
    {
        if(a[i]%2!=0)
        {
            cont= cont+a[i];
        }
    }
    return cont;
}
main()
{
    int vet[4], res;
    preenche(vet,4);
    res= impares(vet,4);
    printf("Soma dos impares: %d",res);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
int pares(int a[], int b)
{   
    int cont=0;
    printf("Casas com valores pares\n");
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",i);
        }
    }
}
main()
{
    int vet[4], res;
    preenche(vet,4);
    pares(vet,4);
}
_________________________________________________
#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
imprimir(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("%d",a[i]);
    }
}
zero(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        if(a[i]<0)
        {
            a[i]=0;
        }
    }
}
main()
{
    int vet[5];

    preenche(vet, 5);
    imprimir(vet, 5);
    zero(vet, 5);
    imprimir(vet, 5);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
int menor(int a[], int b)
{
    int menor, pos;
    for(i=0;i<b;i++)
    {   
        if(i==0)
        {
            menor= a[i];
            pos= i;
        }
        else
        if(a[i]<menor)
        {
            menor= a[i];
            pos= i;
        }
    }
    return pos;
}
main()
{
    int vet[5], res;
    preenche(vet, 5);
    res=maior(vet,5);
    printf("O maior valor esta na casa: %d",res);
    res=menor(vet,5);
    printf("O menor valor esta na casa: %d\n",res);
}
/////////////////////////////////////////////////

#include<stdio.h>

int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&a[i]);
    }
}
int buscar(int a[], int b, int z)
{
    int res=-1;
    for(i=0;i<b;i++)
    {
        if(a[i]==z)
        {
            res = i;
        }
    }
    return res;
}
main()
{
    int vet[4],pos;
    preenche(vet,4);
    pos=buscar(vet,4,10);
    if(pos<0)
    {
        printf("Valor inexistente\n");
    }
    else
    {
        printf("Valor encontrado na casa: %d",pos);
    }
}
_________________________________________________
*/