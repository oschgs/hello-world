/*
_________________________________________________
#include<stdio.h>
#include<string.h>
int i, t;
typedef struct
{
    char nome[10];
    int idade;
}Alunos;
preenche(Alunos a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite seu nome\n");
        scanf("%s",&a[i].nome);
        printf("Digite sua idade\n");
        scanf("%d",&a[i].idade);
    }
}
imprimir(Alunos a[],int b)
{
    for (i=0;i<b;i++)
    {
        printf("Nome: %s -", a[i].nome);
        printf("Idade: %d\n",a[i].idade);
    }
}
main()
{
    Alunos x[5];
    preenche(x,5);
    imprimir(x,5);
}
_________________________________________________
#include<stdio.h>
main()
{
    int time[15],cont1=0,cont2=0,cont3=0,cont4=0,maior=0,dif=0,i;
    for(i=0;i<10;i++)
    {
        printf("Qual seu time de torcida? 1- Flamengo, 2- Vasco, 3- Botafogo, 4- Fluminense\n");
        scanf("%d",&time[i]);
        switch(time[i])
        {
            case 1: cont1++;break;
            case 2: cont2++;break;
            case 3: cont3++;break;
            case 4: cont4++;break;
            default: printf("Por favor registre uma das opcoes validas.\n");
        }
    }
    dif= cont2-cont4;
    maior= cont1;
    if(cont2>maior)
    {
        cont2= maior;
    }
    else
    if(cont3>maior)
    {
       cont3= maior;
    }
    else
    if(cont4>maior)
    {
        cont4= maior;
    }
    else
    {
        printf("Flamengo ganhou o maior numero de votos.\n");
    }
    if(maior==cont2)
    {
        printf("Vasco ganhou o maior numero de votos.\n");
    }
    else
    if(maior==cont3)
    {
        printf("Botafogo ganhou o maior numero de votos.\n");
    }
    else
    if(maior==cont4)
    {
    printf("Fluminense ganhou o maior numero de votos.\n");
    }
    printf("Total de Flamenguistas: %d\n", cont1);
    printf("Diferenca entre Vasco e Fluminence: %d",dif);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i, maior=-1, x=1, cont=0, idade;
    for(i=0;i<x;i++)
    {
        printf("Caso deseje terminar com o processo, digite 0.\nDigite sua idade:\n");
        scanf("%d",&idade);
        switch(idade)
        {
            case 0: x=-1;
            printf("Processo terminado.\n");break;
        }
        x++;
        if(idade>=18&&idade<=35)
        {
            cont++;
        }
        if(idade>maior)
        {
           maior=idade;
        }
        x++;
    }
    printf("Ha %d individuos na faixa de 18 e 35 anos.\n",cont);
    printf("O maior numero de idade e: %d anos.\n",maior);
}
_________________________________________________
#include<stdio.h>
int i;
typedef struct
{
    char nome[15];
    char sobrenome [15];
    int idade;
    char sexo;
}Dados;
preenche(Dados a[],int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite seu nome\n");
        scanf("%s",&a[i].nome);
        printf("Digite o sobrenome\n");
        scanf("%s",&a[i].sobrenome);
        printf("Digite sua idade\n");
        scanf("%d",&a[i].idade);
        printf("Digite o sexo - F ou M\n");
        scanf("%c",&a[i].sexo);
    }
}
imprimir(Dados a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("%s -",a[i].nome);
        printf("%s -",a[i].sobrenome);
        printf("%d -",a[i].idade);
        printf("%c\n",a[i].sexo);
    }
}
main()
{
    Dados vet[4];
    preenche(vet,4);
    imprimir(vet,4);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
typedef struct
{
    char nome[15];
    int idade;
    char sexo;
}Dados;
preenche(Dados a[],int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite seu nome\n");
        scanf("%s",&a[i].nome);
        printf("Digite sua idade\n");
        scanf("%d",&a[i].idade);
        printf("Digite o sexo - F ou M\n");
        scanf("%c",&a[i].sexo);
    }
}
imprimir(Dados a[], int b)
{
    for(i=0;i<b;i++)
    {
        if(a[i].idade>20)
        {
            printf("%s -",a[i].nome);
            printf("%d -",a[i].idade);
            printf("%c\n",a[i].sexo);
        }
    }
}
main()
{
    Dados vet[4];
    preenche(vet,4);
    imprimir(vet,4);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
typedef struct
{
    float n1;
    float n2;
    float n3;
}Notas;
preenche(Notas a[],int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite a nota 1\n");
        scanf("%s",&a[i].n1);
        printf("Digite a nota 2\n");
        scanf("%d",&a[i].n2);
        printf("Digite a nota 3\n");
        scanf("%c",&a[i].n3);
    }
}
media(Notas a[], int b)
{
    float media=0;
    for(i=0;i<b;i++)
    {
        media =(a[i].n1+a[i].n2+a[i].n3)/3;
        printf("Media aluno %d: %.2f\n",i+1,media);
    }
}
main()
{
    Notas vet[4];
    int res;
    preenche(vet,4);
    imprimir(vet,4);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
typedef struct
{
    char nome[15];
    int idade;
}Dados;
preenche(Dados a[],int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite seu nome\n");
        scanf("%s",&a[i].nome);
        printf("Digite sua idade\n");
        scanf("%d",&a[i].idade);
    }
}
int somar(Dados a[], int b)
{
    int soma=0;
    for(i=0;i<b;i++)
    {
        soma= soma+a[i].idade;
    }
    return soma;
}
main()
{
    Dados vet[4];
    int res;
    preenche(vet,4);
    res= somar(vet,4);
    printf("Soma das idades: %d",res);
}
_________________________________________________
#include<stdio.h>
int i;
preenche(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        printf("Digite um valor.\n");
        scanf("%d",&a[i]);
    }
}
contador(int a[], int b)
{
    int cont=0;
    for(i=0;i<b;i++)
    {
        if(a[i]>10)
        {
            cont++;
        }
    }
    return cont;
}
menor(int a[], int b)
{
 int m=0;
    for(i=0;i<b;i++)
    {
        if(i==0)
        {
            m= a[i];
        }
        else
        if (a[i]<m)
        {
            m= a[i];
        }
    }
    return m;
}
parimpar(int a[], int b)
{
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        {
            printf("Par: %d\n",a[i]);
        }
        else
        {
            printf("Impar: %d\n",a[i]);
        }
    }
}
int cont2=0;
maior(int a[], int b, int f)
{
    int qtd=0;
    for(i=0;i<b;i++)
    {
        if(a[i]>f)
        {
            qtd++;
        }
    }
    return qtd;
}
main()
{   
    int vet[3], tot, rec, f, h;
    printf("Digite um valor para ser comparado:\n");
    scanf("%d",&f);
    preenche(vet,20);
    tot= contador(vet,20);
    printf("quantidade de valores maior que 10: %d\n",tot);
    rec= menor(vet,20);
    printf("menor valor: %d\n",rec);
    parimpar(vet,20);
    h=maior(vet,20,f);
    printf("Maiores valores que %d: %d\n",f,h);
}
/////////////////////////////////////////////////

#include<stdio.h>
int i;
typedef struct
{
    int matricula;
    char nome[15];
    int idade;
    float n1;
    float n2;
    float n3;
}Dados;
preenche(Dados a[], int b)
{
   for(i=0;i<b;i++)
   {
    printf("Qual seu nome?\n");
    scanf("%s",&a[i].nome);
    printf("Quantos anos voce tem?\n");
    scanf("%d",&a[i].idade);
    printf("Digite a nota 1\n");
    scanf("%f",&a[i].n1);
    printf("Digite a nota 2\n");
    scanf("%f",&a[i].n2);
    printf("Digite a nota 3\n");
    scanf("%f",&a[i].n3);
    printf("Digite a sua matricula\n");
    scanf("%d",&a[i].matricula);
    }
}
consulta(Dados a[], int b)
{
    printf("Qual a matricula para consulta?\n");
    scanf("%d",&a[i].matricula);
    for(i=0;i<b;i++)
    {
        int x;
        if(x==a[i].matricula)
        {
            printf("Nome do aluno: %s\n",a[i].nome);
            printf("Idade: %d\n",a[i].idade);
            printf("Nota 1: %.2f\n",a[i].n1);
            printf("Nota 2: %.2f\n",a[i].n2);
            printf("Nota 3: %.2f\n",a[i].n3);
        }
    }
}
imprimir(Dados a[],int b)
{
    for(i=0;i<b;i++)
    {
        printf("Nome do aluno: %s\n",a[i].nome);
        printf("Idade: %d\n",a[i].idade);
        printf("Matricula %d\n",a[i].matricula);
        printf("Nota 1: %.2f\n",a[i].n1);
        printf("Nota 2: %.2f\n",a[i].n2);
        printf("Nota 3: %.2f\n",a[i].n3);
    }
}
media(Dados a[], int b)
{
    float media;
    for(i=0;i<b;i++)
    {
        media =(a[i].n1+a[i].n2+a[i].n3)/3;
        printf("Aluno: %s\t",a[i].nome);
        printf("Media: %.2f\n",media);
    }
}
maisvelho(Dados a[], int b)
{
    int y=0;
    for(i=0;i<b;i++)
    {
        if(i==0)
        {
            y= a[i].idade;
        }
        else
        if(a[i].idade>y)
        {
            y= a[i].idade;
        }
    }
    printf("Aluno mais velho:\n");
    for(i=0;i<b;i++)
    {
        if(a[i].idade==y)
        {
            printf("Idade: %d\n",a[i].idade);
            printf("Nome: %s\n",a[i].nome);
            printf("Matricula: %d\n",a[i].matricula);
            printf("Nota 1: %.2f\n",a[i].n1);
            printf("Nota 2: %.2f\n",a[i].n2);
            printf("Nota 3: %.2f\n",a[i].n3);
        }
    }
}
main()
{
    Dados vet[50];
    preenche(vet,50);
    consulta(vet,50);
    imprimir(vet,50);
    media(vet,50);
    maisvelho(vet,50);
}
_________________________________________________

*/