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

int main(){
    menuPrincipal();
}

void menuPrincipal(){
    int menuPrincipal;

    do {
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

        scanf("%d", & menuPrincipal);

        switch (menuPrincipal) {
            case 1:
                funcaoConstante();
                break;

            case 2:
                funcaoXElevadoAK();
                break;

            case 3:
                //CombinacaoSimples();
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
    } while (menuPrincipal != 11);

    return 0;
}

void quebraLinha(){
    printf("================================================================================ \n\n");
}

double funcaoRecebeK(){
    double k;
    printf("qual valor de k deseja aplicar? ");
    scanf("%lf", & k);
    quebraLinha();
    return k;
}

double funcaoRecebeX(){

}

double validaInput(){
    char buf[40];
    char * endPt;
    double x;
    fflush(stdin); //usado para limpar buffer de input no caso quando usa scanf
    printf("entre com um valor: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    x = strtod(buf, & endPt);
    if (* endPt != '\0' || strlen(buf) == 0)
        printf("numero invalido\n");
    else
        printf("numero valido\n");
    return x;
}

void calculaFuncaoConstante(){
    double k = funcaoRecebeK();
    double x = validaInput();
    printf("f(%lf) = %lf \n", x, k);
    quebraLinha();
}

void calculaDerivadaConstante(){
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    printf(" f'(%f) = 0 \n", x);
    quebraLinha();
}

void calculaIntegralDefinidaConstante(){
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    float a = funcaoIntegralDefinidaA();
    float b = funcaoIntegralDefinidaB();
    printf(" I(%f,%f) = por o resultado \n", a, b);
    quebraLinha();
}

void calculaFuncaoXElevadoAK(){
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    printf("f(%f) = %lf \n", x, pow(x, k));
    quebraLinha();
}

void calculaDerivadaXElevadoAK(){
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    float xk;
    printf(" f'(%f) = %lf \n", x, xk);
    quebraLinha();
}

void funcaoConstante(){
    int funcaoConstante;
    do {
        quebraLinha();
        printf("\n        MENU\n\n");
        printf("\n  f(x) = k\n");
        printf("\n  Digite o numero da opcao e aperte enter para selecionar o calculo a ser feito\n\n");
        printf("\n1.	FUNCAO");
        printf("\n2.	DERIVADA");
        printf("\n3.	INTEGRAL DEFINIDA");
        printf("\n4.	VOLTAR AO MENU PRINCIPAL; \n\n");
        quebraLinha();

        scanf("%d", & funcaoConstante);
        quebraLinha();

        switch (funcaoConstante) {
            case 1:
                calculaFuncaoConstante();
                break;
            case 2:
                calculaDerivadaConstante();
                break;
            case 3:
                calculaIntegralDefinidaConstante();
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida \n");
                break;
        }
    } while (funcaoConstante != 4);
}

void funcaoXElevadoAK(){
    int funcaoXElevadoAK;

    do {
        quebraLinha();
        printf("\n        MENU\n\n");
        printf("\n  f(x) = x^k\n");
        printf("\n  Digite o numero da opcao e aperte enter para selecionar o calculo a ser feito\n\n");
        printf("\n1.	FUNCAO");
        printf("\n2.	DERIVADA");
        printf("\n3.	INTEGRAL DEFINIDA");
        printf("\n4.	VOLTAR AO MENU PRINCIPAL; \n\n");
        quebraLinha();

        scanf("%d", & funcaoXElevadoAK);
        quebraLinha();

        switch (funcaoXElevadoAK) {
            case 1:
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
    } while (funcaoXElevadoAK != 4);
}

float funcaoIntegralDefinidaA(){
    float a;
    printf("qual valor do extremo a deseja aplicar? ");
    scanf("%f", & a);
    quebraLinha();
    return a;
}

float funcaoIntegralDefinidaB(){
    float b;
    printf("qual valor do extremo b deseja aplicar? ");
    scanf("%f", & b);
    quebraLinha();
    return b;
}
