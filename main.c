#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/* Prototipos Auxiliares */
void menuPrincipal();
void quebraLinha();
void funcaoConstante();

/* Prototipos Calculos */
double funcaoRecebeK();
double funcaoRecebeX();
double validaInput();
float funcaoIntegralDefinidaA();
float funcaoIntegralDefinidaB();
void funcaoXElevadoAK();
void calculaFuncaoConstante();
void calculaDerivadaConstante();
void calculaIntegralDefinidaConstante();
void calculaFuncaoXElevadoAK();
void calculaDerivadaXElevadoAK();

int main()
{
    menuPrincipal();
}

void menuPrincipal()
{
int menuPrincipal;
    do{
        quebraLinha();
        printf("\n        MENU\n\n");
        printf("\n  Digite o numero da opcao e aperte enter para selecionar o calculo a ser feito\n\n");
        printf("\n1.	f(x) = k;");
        printf("\n2.	f(x) = x^k;");
        printf("\n3.	f(x) = k^x;");
        printf("\n4.	f(x) = e^x;");
        printf("\n5.	f(x) = log(x) na base k;");
        printf("\n6.	f(x) = ln(x);");
        printf("\n7.	f(x) = 1/x;");
        printf("\n8.	f(x) = sen(x);");
        printf("\n9.	f(x) = cos(x);");
        printf("\n10.	f(x) = tg(x);");
        printf("\n11.	SAIR; \n\n");
        quebraLinha();


        scanf("%d", &menuPrincipal);

        switch(menuPrincipal)
        {case 1:
                funcaoConstante();
                break;

            case 2:
                funcaoXElevadoAK();
                break;

            case 3:
                funcaoKElevadoAX();
                break;

            case 4:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 5:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 6:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 7:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 8:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 9:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 10:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            case 11:
                printf("\n *Saindo...* \n *Pressione qualquer tecla para sair!*\n");
                break;

            default:
                printf("Opcao invalida \n");
                break;
        }
    }while(menuPrincipal !=11);

    return 0;
}

int menuSecundario()
{
int escolha;

    printf("\n        MENU\n\n");
    printf("\n  Digite o numero da opcao e aperte enter para selecionar o calculo a ser feito\n\n");
    printf("\n1.	FUNCAO");
    printf("\n2.	DERIVADA");
    printf("\n3.	INTEGRAL DEFINIDA");
    printf("\n4.	VOLTAR AO MENU PRINCIPAL; \n\n");
    quebraLinha();

    scanf("%d", &escolha);
    quebraLinha();

    return escolha;
}

double validaInput()
{
   char buf[40];
   char *endPt;
   double x;
   fflush(stdin); //usado para limpar buffer de input no caso quando usa scanf
   fgets(buf, sizeof(buf), stdin);
   buf[strlen(buf)-1] = '\0' ;
   x = strtod(buf, &endPt);
    if (*endPt != '\0' || strlen(buf)==0 )
        {
            printf("numero invalido\n");
        }
    else
        {
            printf("numero valido\n");
        }
   return x;
}

double funcaoRecebeX()
{
    printf("qual valor de X deseja aplicar? ");
    double x = validaInput();
    //scanf("%lf", &k);
    quebraLinha();
    return x;
}

double funcaoRecebeK()
{
    printf("qual valor de k deseja aplicar? ");
    double k = validaInput();
    //scanf("%lf", &k);
    quebraLinha();
    return k;
}

//NAO SEI OQ ERAM ESSAS MAS TBM NAO APAGUEI AHAHHA
/*float funcaoIntegralDefinidaA()
{
  float a;
  printf("qual valor do extremo a deseja aplicar? ");
  scanf("%f", &a);
  quebraLinha();
  return a;
}

float funcaoIntegralDefinidaB()
{
  float b;
  printf("qual valor do extremo b deseja aplicar? ");
  scanf("%f", &b);
  quebraLinha();
  return b;
}*/

void funcaoConstante()
{int funcaoConstante;

    do{
        quebraLinha();
        printf("\n  f(x) = k\n");

        funcaoConstante = menuSecundario();
        quebraLinha();

        switch(funcaoConstante)
        {case 1:
                calculaFuncaoConstante();
                break;

            case 2:
                calculaDerivadaConstante();
                break;

            case 3:
                //calculaIntegralDefinidaConstante();
                break;

            case 4:
                break;

            default:
                printf("Opcao invalida \n");
                break;
        }

    }while(funcaoConstante !=4);

}

void funcaoXElevadoAK()
{int funcaoXElevadoAK;

    do{

        quebraLinha();
        printf("\n  f(x) = x^k\n");

        funcaoXElevadoAK = menuSecundario();
        quebraLinha();

        switch(funcaoXElevadoAK)
        {case 1:
                calculaFuncaoXElevadoAK();
                break;

            case 2:
                calculaDerivadaXElevadoAK();
                break;

            case 3:
                //calculaIntegralDefinidaXElevadoAK();
                break;

            case 4:
                break;

            default:
                printf("Opcao invalida \n");
                break;
        }

    }while(funcaoXElevadoAK !=4);

}

void funcaoKElevadoAX()
{int funcaoKElevadoAX;

    do{

        quebraLinha();
        printf("\n  f(x) = k^x\n");

        funcaoKElevadoAX = menuSecundario();
        quebraLinha();

        switch(funcaoKElevadoAX)
        {case 1:
                calculaFuncaoKElevadoAX();
                break;

            case 2:
                calculaDerivadaKElevadoAX();
                break;

            case 3:
                //calculaIntegralDefinidaXElevadoAK();
                break;

            case 4:
                break;

            default:
                printf("Opcao invalida \n");
                break;
        }

    }while(funcaoKElevadoAX !=4);

}

void quebraLinha()
{
    printf("================================================================================ \n\n");
}



//FUNCAO CONSTANTE
void calculaFuncaoConstante()
{
  double k = funcaoRecebeK();
  //double x = validaInput();
  printf("f(x) = %lf \n", k);
  quebraLinha();
}

void calculaDerivadaConstante()
{
  float k = funcaoRecebeK();
  //float x = funcaoRecebeX();
  printf(" f'(x) = 0 \n");
  quebraLinha();
}

/*void calculaIntegralDefinidaConstante()
{
  float k = funcaoRecebeK();
  float x = funcaoRecebeX();
  float a = funcaoIntegralDefinidaA();
  float b = funcaoIntegralDefinidaB();
  printf(" I(%f,%f) = por o resultado \n", a, b);
  quebraLinha();
}*/


//X ELEVADO A K
void calculaFuncaoXElevadoAK()
{
  float k = funcaoRecebeK();
  float x = funcaoRecebeX();
  printf("f(%f) = %lf \n", x, pow(x, k));
  quebraLinha();
}

void calculaDerivadaXElevadoAK()
{
  float k = funcaoRecebeK();
  float x = funcaoRecebeX();
  float result = 0;
  result = k*(pow(x, k-1));
  printf(" f'(%f) = %lf \n", x, result);
  quebraLinha();
}


//K ELEVADO A X

void calculaFuncaoKElevadoAX()
{
  float k = funcaoRecebeK();
  float x = funcaoRecebeX();
  printf("f(%f) = %lf \n", x, pow(k, x));
  quebraLinha();
}

void calculaDerivadaKElevadoAX()
{
  float k = funcaoRecebeK();
  float x = funcaoRecebeX();
  float result = 0;
  printf("%f\n", pow(k,x));
  printf("%f\n", log((double)k));
  result = pow(k,x)*log((double)k);
  printf(" f'(%f) = %lf \n", x, result);
  quebraLinha();
}
