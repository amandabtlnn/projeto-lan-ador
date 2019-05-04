#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("Nome:Matheus Martins de Oliveira.\nDisciplina:Algoritmos e Programação I.\nCurso:Sistemas de Informação.\n");
    printf("\n\n");
    printf("----Lancamento de Projetil----\n");
    printf("\n\n");
    float radianos,sen,cosen,angulo,v0,g,ymax,t,xf;
    system("color 8F");
    int choose=0;
    printf("Digite a velocidade inicial(m/s):\n");
    scanf("%f",&v0);
    if(v0<0){
        printf("Digite um valor positivo para a velocidade.\n");
        system("pause");
        exit(1);
    }
    printf("Digite a aceleracao(m/s^2):\n");
    scanf("%f",&g);
    if(g<0){
        printf("\aNeste caso, a=-g,a gravidade nao pode ser negativa.\n");
        system("pause");
        exit(1);
    }
    if(g==0){
        printf("Digite outro valor para a aceleracao\n");
        system("pause");
        exit(1);
    }
    printf("Digite um angulo em graus(∞)\n");
    scanf("%f",&angulo);
    radianos = (angulo * M_PI)/180;
    printf("\n\n");
    printf("----  Dados  ----\n");
    printf("Velocidade(m/s):%f\n",v0);
    printf("Aceleracao(m/s^2):%f\n",g);
    printf("Angulo(∞):%f\n",angulo);
    printf("----  Dados  ----");
    printf("\n");
    printf("\n");
start:
    printf("Escolha uma das opcoes:\n1)Calcular a Altura Maxima\n2)Calcular o tempo de voo\n3)Calcular o alcance horizontal.\n4)Sair.\n\n");
    scanf("%d",&choose);
    if(choose==1){
        sen= sin(radianos);
        ymax=(pow(v0,2)*(pow(sen,2)))/(2*g);
        printf("\aAltura m·xima(m)=%f\n",ymax);
        printf("\n\n");
        goto start;
    }
    if(choose==2){
        sen= sin(radianos);
        t=(2*v0*sen)/g;
        printf("\aTempo de voo(s)=%f\n",t);
        printf("\n\n");
        goto start;
    }
    if(choose==3){
        cosen=cos(radianos);
        sen= sin(radianos);
        xf=(2*pow(v0,2)*(cosen*sen)/g);
        printf("\aAlcance Horizontal(m)=%f\n",xf);
        printf("\n\n");
        goto start;
    }
    if(choose==4){
        system("pause");
        exit(1);
    }
    return 0;
}

