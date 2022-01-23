/*
_________________________________________________
#include<stdio.h>


main()
{
    int x;

    printf("Digite um valor.\n");
    scanf("%d",&x);

    if(x>10)
    {
        printf("Maior que 10.");
    }
    else
    if(x<10)
    {
        printf("Menor que 10.");
    }
    else
    {
        printf("Igual a 10.");
    }
    
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x;

    printf("Digite um valor.\n");
    scanf("%d",&x);

    if(x>50)
    {
        printf("Maior que 50.");
    }
    else
    if(x<50)
    {
        printf("Menor que 50.");
    }
    else
    {
        printf("Igual a 50.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y;

    printf("Digite um valor.\n");
    scanf("%d",&x);
    printf("Digite um outro valor.\n");
    scanf("%d",&y);

    if(x>y)
    {
        printf("%d maior que %d.",x,y);
    }
    else
    if(x<y)
    {
        printf("%d maior que %d.",y,x);
    }
    else
    {
        printf("Os numeros sao de mesmo valor.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y;

    printf("Digite um valor.\n");
    scanf("%d",&x);
    printf("Digite outro valor.\n");
    scanf("%d",&y);

    if(x>y)
    {
        printf("%d, %d.",x,y);
    }
    else
    if(x<y)
    {
        printf("%d, %d.",y,x);
    }
    else
    {
        printf("Os valores sao iguais.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>


main()
{
    int x,y,b,a;

    printf("Digite um valor.\n");
    scanf("%d",&x);
    printf("Digite outro valor.\n");
    scanf("%d",&y);

    if(x>y)
    {
        b=x*5;
        a=y*10;
        printf("Primeiro valor digitado resulta em %d, ja o segundo valor %d.",b,a);
    }
    else
    if(x<y)
    {
        b=x*10;
        a=y*5;
        printf("Primeiro valor digitado resulta em %d, ja o segundo valor %d.",b,a);
    }
    else
    {
        printf("Os valores digitados sao iguais.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y;
    
    printf("Digite um valor.\n");
    scanf("%d",&x);
    printf("Digite um outro valor.\n");
    scanf("%d",&y);

    if(x>y)
    {
        printf("%d maior que %d",x,y);
    }
    else
    if(x<y)
    {
        printf("%d maior que %d",y,x);
    }
    else
    {
        printf("Os valores digitados sao iguais.");
    }
    
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x;

    printf("Digite um valor.\n");
    scanf("%d",&x);

    if(x>0)
    {
        printf("Valor positivo.");
    }
    else
    if(x<0)
    {
        printf("Valor negativo.");
    }
    else
    {
        printf("igual a zero.");
    }
    
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x;

    printf("Digite um valor.\n");
    scanf("%d",&x);

    if(x==1)
    {
        printf("Domingo.");
    }
    else
    if(x==2)
    {
        printf("Segunda.");
    }
    if(x==3)
    {
        printf("Terça.");
    }
    else
    if(x==4)
    {
        printf("Quarta.");
    }
    if(x==5)
    {
        printf("Quinta.");
    }
    else
    if(x==6)
    {
        printf("Sexta.");
    }
     else
    if(x==7)
    {
        printf("Sabado.");
    }
}
_________________________________________________
#include<stdio.h>
main()
{
    int x;

    printf("Digite um valor de 1 a 7.\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:printf("Domingo\n");break;

        case 2:printf("Segunda\n");break;

        case 3:printf("Terça\n");break;

        case 4:printf("Quarta\n");break;

        case 5:printf("Quinta\n");break;

        case 6:printf("Sexta\n");break;

        case 7:printf("Sabado\n");break;

        default:
        printf("Por favor, valores de 1 a 7.\n");

    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y,r;

    printf("Digite um valor.\n");
    scanf("%d",&x);
    printf("Digite um outro valor.\n");
    scanf("%d",&y);
    printf("Digite uma operacao para ser realizada (1- Soma, 2- Subtracao, 3- Divisao, 4- Multiplicacao).\n");
    scanf("%d",&r);
    switch(r)
    {
        case 1: printf("O resultado e: %d",x+y);break;
        case 2: printf("O resultado e: %d",x-y);break;
        case 3: printf("O resultado e: %d",x/y);break;
        case 4: printf("O resultado e: %d",x*y);break;
        default: printf("Por favor, selecione as opcoes corretamente.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y;

    printf("Digite o valor total de compras.\n");
    scanf("%d",&x);
    printf("Digite uma das opcoes para prestacao do valor(1- 5 prestacoes, 2- 10 prestacoes, 3- 12 prestacoes, 4- 24 prestacoes).\n");
    scanf("%d",&y);

    switch(y)
    {
        case 1: printf("As prestacoes serao cobradas no valor de: $%d,00",x/5);break;
        case 2: printf("As prestacoes serao cobradas no valor de: $%d,00",x/10);break;
        case 3: printf("As prestacoes serao cobradas no valor de: $%d,00",x/12);break;
        case 4: printf("As prestacoes serao cobradas no valor de: $%d,00",x/24);break;
        default: printf("Por favor, selecione uma opcao valida.");
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int b,h,x,y;

    printf("Digite uma operacao a ser feita (1- Area do quadrado, 2- Area do triangulo, 3- Area do retangulo, 4- Cubo de um numero).\n");
    scanf("%d",&x);
    printf("Digite o primeiro valor\n");
    scanf("%d",&h);
    printf("Digite o segundo valor\n");
    scanf("%d",&b);

    switch(x)
    {
        case 1: printf("O valor do calculo resulta em %d",b*h);break;
        case 2: printf("O valor do calculo resulta em %d",b*h/2);break;
        case 3: printf("O valor do calculo resulta em %d",b*h);break;
        case 4: printf("O valor do calculo resulta em %d",h*h*h);break;
        default: printf("Por favor digite valores validos.\n");
    }

}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int x,y,z,c;

    printf("Digite a primeira nota\n");
    scanf("%d",&x);
    printf("Digite a segunda nota\n");
    scanf("%d",&y);
    z= x+y;
    printf("Qual o curso atuante? (1- Sistema de informacao, 2- Administracao, 3- Fisioterapia, 4- Direito).\n");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
            if(z>=7)
            {
                printf("Aprovado.\n");break;
            }
            else
            {
                printf("Reprovado.\n");break;
            }
        case 2:
            if(z>=5)    
            {
                printf("Aprovado.\n");break;
            }
            else
            {
                printf("Reprovado.\n");break;
            }
        case 3:
            if(z>=8)
            {
                printf("Aprovado.\n");break;
            }
            else
            {
                printf("Reprovado.\n");break;
            }
        case 4:
            if(z>=9)
            {
                printf("Aprovado.\n");break;
            }
            else
            {
                printf("Reprovado.\n");break;
            }
        default: printf("Por favor, insira um valor de nota valido.");break;
    }
}
/////////////////////////////////////////////////

_________________________________________________
#include<stdio.h>
main()
{
    float n1,n2,m;
    int i;
    for(i=1;i<=10;i=i+1)
    {
        printf("Digite a primeira nota. \n");
        scanf("%f",&n1);
        printf("Digite a segunda nota. \n");
        scanf("%f",&n2);

        m= (n1+n2)/2;

        if(m>=7)
        {
            printf("Aprovado com: %.1f\n",m);
        }
        else
        {
            printf("Reprovado com: %.1f\n",m);
        }
    }
}
_________________________________________________
#include<stdio.h>
main()
{
    int aa=2020, an, i, idade;
    for(i=1;i<=20;i++)
    {
        printf("Digite seu ano de nascenca\n");
        scanf("%d",&an);

        idade= aa-an;
        if(idade<18)
        {
            printf("Eres menor de idade.\n");
        }
        else
        {
            printf("Eres maior de idade.\n");
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i, idade, cont=0;
    float media;

    for(i=1;i<=50;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d",&idade);

        cont= cont+idade;
        media= cont/50;
    }
    printf("Maiores de idade: %.1f",media);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i, idade, media, cont=0;
    
    for(i=1;i<=30;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d",&idade);

        cont= cont+idade;
        media= idade/30;
        scanf("%d",media);
        printf("A media das idades equivale a: %d\n",media);
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i, x, par=0, impar=0;
    for(i=1;i<=15;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d",&x);

        if(x%2==0)
        {
            par=par+x;
        }
        else
        {
            impar++;
        }
        printf("pares: %d",par);
        printf("impares: %d",impar);

    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i, soma=0;

    for(i=100;i<=200;i++)
    {
        soma = soma+i;
    }
    printf("total: %d",soma);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    float altura, x, y, z;
    int i;

    for(i=1;i<=20;i+1);
    {
        printf("Digite sua altura.\n");
        scanf("%f",&altura);
    }
}
_________________________________________________
#include<stdio.h>
main()
{
    float idade, qtdlivros, cont1=0, cont2=0;
    int i, soma=0, soma2=0;
    for(i=0;i<4;i++)
    {
        printf("Digite sua idade\n");
        scanf("%f",&idade);
        printf("Digite a quantidade de livros\n");
        scanf("%f",&qtdlivros);

        if(qtdlivros>=5)
        {
            cont1++;
        }
        else
        {
            soma= soma+idade;
            cont2++;
        }
        if(idade<10)
        {
            soma2 = soma2+qtdlivros;
        }
    }
    printf("Pessoas que leram 5 ou mais livros: %d\n",cont1);
    printf("Media das idades que leram menos que 5 livros: %.1f\n",soma/soma2);
    printf("Total de livros lidos por menores que 10 anos: %d\n",soma2);
}
_________________________________________________
#include<stdio.h>


main()
{
  int i,x,y,op;

    i=0;
    //for(i=0;i<4;i++)
    while(i<4)
    {
        printf("Digite um valor\n");
        scanf("%d",&x);
        printf("Digite outro valor\n");
        scanf("%d",&y);

        printf("Soma: %d\n",x+y);

        //printf("Digite 0 para continuar e 1 para parar\n");
        //scanf("%d",&op);

        i++;
    }
}
//////////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i,x,maior=0;
    i=0;
    while(i<=20)
    {
        printf("Digite um valor\n");
        scanf("%d",&x);

        if(x>maior)
        {
            maior=x;
        }
        else
        {
            maior=maior;
        }
        i++;
    }
    printf("Maior valor: %d",maior);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i,x,maior=0;
    i=1;
    while(i<26)
    {
        printf("%d\n",i*i);
        i++;
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i,x,soma=0;
    i=1;
    while(i<1000)
    {
        if(i%2==0)
        {
            soma= soma+i;
        }
        i++;
    }
    printf("Soma dos pares %d\n",soma);
}
/////////////////////////////////////////////////


_________________________________________________
#include<stdio.h>
main()
{
    int x,y,a=2020,i;
    i=1;
    while(i<=20)
    {
        printf("Digite seu ano de nascenca\n");
        scanf("%d",&x);
        if(i<18)
        {
            printf("Menor de idade.\n");
        }
        else
        {
            printf("Maior de idade.\n");
        }
    }
    i++;
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    float idade, cont=0, tot=0;
    int i;
    i=1;
    while(i<=30)
    {
        printf("Digite sua idade\n");
        scanf("%f",&idade);
        cont= cont + idade;
        tot++;

        i++;
    }
    printf("Media: %.1f",cont/tot);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i,x,soma=0,qtd=0;
    i=1;
    while(i<=15)
    {
        printf("Digite sua idade\n");
        scanf("%d",&x);
        if(x%2==0)
        {
            soma= soma+x;
        }
        else
        {
            qtd++;
        }
        i++;
    }
    printf("Soma de pares: %d\n",soma);
    printf("Quantidade de impares: %d\n",qtd);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i,x,soma=0,qtd=0;
    i= 100;
    while(i<=200)
    {
        soma= soma+i;
        i++;
    }
    printf("Soma total: %d\n",soma);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int i;
    float altura, menor=0;
    i=1;

    while(i<=5)
    {
        printf("Valor de menor: %.2f\n",menor);
        printf("Digite sua altura \n");
        scanf("%f",&altura);
        if(i==1)
        {
            menor = altura;
        }
        else
        {
            if(altura<menor)
            {
                menor = altura;
            }
            else
            {
                menor = menor;
            }
        }
        i++;
    }
    printf("Menor altura: %.2f",menor);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
int x,i;
float z,a;
    while (i==0)
    {
        printf("Digite o número correspondente ao calculo desejado \n 1 para área do quadrado \n 2 para área do triângulo \n 3 para área do retangulo \n 4 para cubo \n 5 para sair \n");
        scanf("%d",&x); 
        switch(x)
        {
        case 1: printf("Digite o lado do quadrado \n");
        scanf("%f",&z);
        printf("O valor obtido do quadrado é %f \n",z*z);
        i = 0;break;
        case 2: printf("Digite o valor da base do triangulo \n");
        scanf("%f",&a);
        printf("Digite o valor da altura do triangulo \n");
        scanf("%f",&z);
        printf("O valor obtido do triangulo e de %f \n",a*z/2);
        i = 0;break;
        case 3: printf("Digite o valor da base do retangulo \n");
        scanf("%f",&a);
        printf("Digite o valor da altura do retangulo \n");
        scanf("%f",&z);
        printf("O valor obtido do retangulo e de %f \n",a*z);
        i = 0;break;
        case 4: printf("Digite o valor da area do cubo \n");
        scanf("%f",&z);
        printf("O valor da área em cubo eh de %f\n", z*z*z);
        i = 0;break;
        case 5: i = 1;break;
        default:printf("Valor invalido");break;
        }
    }
}
/////////////////////////////////////////////////
_________________________________________________
#include<stdio.h>
main()
{
    int vet[6],i;

    for(i=0;i<6;i++)
    {
        printf("Digite um valor");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",vet[i]);
    }
}

/////////////////////////////////////////////////
#include<stdio.h>
main()
{
    int vet[10],i;

    for(i=0;i<10;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    printf("Valores do vetor:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",vet[i]);
    }
}

/////////////////////////////////////////////////
#include<stdio.h>
main()
{
    int op;
    printf("Escolha o tamanho do vetor\n");
    scanf("%d",&op);

    int vet[op],i;

    for(i=0;i<op;i++)
    {
        printf("Digite um valor da casa %d\n",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<op;i++)
    {
        printf("%d",&vet[i]);
    }
}

/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[10], maior=0, pos, i;

    for(i=0;i<10;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++)
    {
        if(vet[i]>maior)
        {
            maior= vet[i];
            pos= i;
        }
    }
    printf("O maior valor %d esta na casa: %d",maior,pos);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[10], imp=0, pos, i;
    for(i=0;i<10;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++)
    {
        if(vet[i]>0 && vet[i]%2==1)
        {
            pos++;
            imp++;
        }   
    }
    printf("O maior valor %d esta na casa: %d",pos);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[6], cont=0, i;
    float soma=0, media;

    for(i=0;i<6;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<6;i++)
    {
        if(vet[i]<10)
        {
            soma= soma+vet[i];
            cont++;
        }
    }
    media= soma/cont;
    printf("Soma: %.0f",soma);
    printf("Quantidade: %d",cont);
    printf("Media: %2.f",media);
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[6], pos, i, x;

    for(i=0;i<6;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    printf("Digite o valor que voce procura\n");
    scanf("%d",&x);
    for(i=0;i<6;i++)
    {
        if(vet[i]==x)
        {
            printf("Valor encontrado na casa %d",i);
        }
        else
        {
            printf("Valor ausente na casa %d",i);
        }
    }
}
_________________________________________________
#include<stdio.h>
main()
{
    int mat[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor\n");
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
    int vet[10],i,cont=0;
    float soma=0, media;

    for(i=0;i<10;i++)
    {
        printf("Digite o valor\n");
        scanf("%d",&vet[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(vet[i]>=10 && vet [i]<=150)
        {
            soma= soma+vet[i];
            cont++;
        }
    }
    media = soma/cont;
    printf("Media dos valores do intervalo: %.1f", media);
}
//////////////////////////////////////////////////////////

#include<stdio.h>
main()
{
    float notas[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Digite a nota %d do aluno %d --> ",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }
    
    printf("Notas dos alunos\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("nota %d do aluno %d - ",j+1,i+1);
            printf("%.1f\n",notas[i][j]);
        }
    }
}
/////////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[10],i,cont=0,cont2=0;
    float soma=0, media;

    for(i=0;i<10;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++)
    {
        if(vet[i]>=18)
        {
            soma= soma+vet[i];
            cont++;
        }
        else
        {
            cont2++;
        }
    }
    media= soma/cont;
    printf("Media dos maiores de idade: $.1f\n",media);
    printf("Quantidade de menores de idade: %d\n",cont2);
}
/////////////////////////////////////////////

#include<stdio.h>
main()
{
    int vet[4],i,cubo[4],quadrado[4];

    for(i=0;i<4;i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<4;i++)
    {
        cubo[i]= vet[i]*vet[i]*vet[i];
        quadrado[i]= vet[i]*vet[i];
    }
    printf("Vetor normal\n");
    for(i=0;i<4;i++)
    {
        printf("%d\n",vet[i]);   
    }
    printf("Vetor cubo\n");
    for(i=0;i<4;i++)
    {
     printf("%d\n",cubo[i]);   
    }
    printf("Vetor quadrado\n");
    for(i=0;i<4;i++)
    {
     printf("%d\n",quadrado[i]);   
    }
}
_________________________________________________
*/