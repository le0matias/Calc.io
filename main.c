#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define E 2.718281
#define PI 3.14159265359

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
void eElevadoAX();
void calcula_e_ElevadoAX();
void derivada_e_ElevadoAX();
void logXBaseK();
void calculaLogDeX();
void calculaDerivadaLogX();
void lnX();
void calculaLnX();
void derivadaLnX();
void umSobreX();
void calculaUmSobreX();
void derivadaUmSobreX();
void senX();
void calculaSenX();
void derivadaSenx();
void cosX();
void calculaCosX();
void derivadaCosX();
void tgX();
void calculaTgX();
void derivadaTgX();
double grausParaRadianos(double d);
double logbase(double a, double base);
int validaTgRad(double tg);
int validaTgGraus(double tg);
void pauseAndClear();

int main()
{
    menuPrincipal();
}

void menuPrincipal()
{
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
        fflush(stdin);

        switch (menuPrincipal) {
            case 1:
                funcaoConstante();
                break;

            case 2:
                funcaoXElevadoAK();
                break;

            case 3:
                funcaoKElevadoAX();
                break;

            case 4:
                eElevadoAX();
                break;

            case 5:
                logXBaseK();
                break;

            case 6:
                lnX();
                break;

            case 7:
                umSobreX();
                break;

            case 8:
                senX();
                break;

            case 9:
                cosX();
                break;

            case 10:
                tgX();
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

int menuSecundario()
{
    int escolha;
    //printf("\n\t MENU\n\n");
    printf("\n  Digite o numero da opcao e aperte enter para selecionar o calculo a ser feito\n\n");
    printf("\n1.	FUNCAO");
    printf("\n2.	DERIVADA");
    printf("\n3.	INTEGRAL DEFINIDA");
    printf("\n4.	VOLTAR AO MENU PRINCIPAL; \n\n");
    quebraLinha();

    scanf("%d", & escolha);

    fflush(stdin);

    return escolha;
}

double validaInput()
{
    char buf[40];
    char * endPt;
    double x;
    fflush(stdin); //usado para limpar buffer de input no caso quando usa scanf
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    x = strtod(buf, & endPt);
    if (* endPt != '\0' || strlen(buf) == 0) {
        printf("Numero invalido\n");
        printf("Digite outro valor: ");
        validaInput();
    }
    return x;
}

void pauseAndClear(){
    system("PAUSE");
    system("cls");
}

double funcaoRecebeX(){
    printf("qual valor de X deseja aplicar? ");
    double x = validaInput();
    printf("\n");
    return x;
}

double funcaoRecebeK(){
    printf("qual valor de k deseja aplicar? ");
    double k = validaInput();
    printf("\n");
    return k;
}

double grausParaRadianos(double d){
    return (d * PI) / 180;
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

void funcaoConstante(){

    int escolha;

    do {
        quebraLinha();
        printf("\n\tf(x) = k\n");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
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

    } while (escolha != 4);

}

void funcaoXElevadoAK(){

    int escolha;

    do {

        quebraLinha();
        printf("\n\tf(x) = x^k\n");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
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

    } while (escolha != 4);

}

void funcaoKElevadoAX(){

    int escolha;

    do {

        quebraLinha();
        printf("\n\tf(x) = k^x\n");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
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

    } while (escolha != 4);

}

void logXBaseK(){

    int escolha;

    do {

        quebraLinha();
        printf("\n\tf(x) = logk(x)");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaLogDeX();
                break;

            case 2:
                calculaDerivadaLogX();
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

    } while (escolha != 4);

}

void eElevadoAX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = e^x");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
            case 2:
                calcula_e_ElevadoAX();
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

    } while (escolha != 4);
}

void lnX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = ln(x)");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaLnX();
                break;
            case 2:
                derivadaLnX();
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

    } while (escolha != 4);
}

void umSobreX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = 1/x");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaUmSobreX();
                break;
            case 2:
                derivadaUmSobreX();
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

    } while (escolha != 4);
}

void senX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = sen(x)");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaSenX();
                break;
            case 2:
                derivadaSenx();
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

    } while (escolha != 4);
}

void cosX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = cos(x)");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaCosX();
                break;
            case 2:
                derivadaCosX();
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

    } while (escolha != 4);
}

void tgX(){
    int escolha = 0;

    do {

        quebraLinha();
        printf("\n\tf(x) = tg(x)");

        escolha = menuSecundario();
        quebraLinha();

        switch (escolha) {
            case 1:
                calculaTgX();
                break;
            case 2:
                derivadaTgX();
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

    } while (escolha != 4);
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
    pauseAndClear();
}

void calculaDerivadaConstante()
{
    float k = funcaoRecebeK();
    //float x = funcaoRecebeX();
    printf(" f'(x) = 0 \n");
    pauseAndClear();
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
    pauseAndClear();
}

void calculaDerivadaXElevadoAK()
{
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    float result = 0;
    result = k * (pow(x, k - 1));
    printf(" f'(%f) = %lf \n", x, result);
    pauseAndClear();
}


//K ELEVADO A X

void calculaFuncaoKElevadoAX()
{
    float k = funcaoRecebeK();
    float x = funcaoRecebeX();
    printf("f(%f) = %lf \n", x, pow(k, x));
    pauseAndClear();

}

void calculaDerivadaKElevadoAX()
{
    float k = funcaoRecebeK();
    if(k > 0){
        float x = funcaoRecebeX();
        float result = 0;
        printf("%f\n", pow(k, x));
        printf("%f\n", log((double)k));
        result = pow(k, x) * log((double)k);
        printf(" f'(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de k invalido, tente novamente\n");
        calculaDerivadaKElevadoAX();
    }
}

//LOG DE X
double logbase(double a, double base)
{
    return log(a) / log(base);
}

void calculaLogDeX(){
    double k = funcaoRecebeK();
    double x = funcaoRecebeX();
    if((k > 1) && (x >= 1)){
       double result = 0;
        result = logbase(x, k);
        printf(" f(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valores providos sao invalidos, tente novamente \n\n");
        calculaLogDeX();
    }
}

void calculaDerivadaLogX(){
    double k = funcaoRecebeK();
    double x = funcaoRecebeX();
    if((k > 1) && (x != 0)){
        double result = 0;
        result = 1 / (x * log(k));
        printf(" f'(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valores providos sao invalidos, tente novamente \n\n");
        calculaDerivadaLogX();
    }
}

//e ELEVADO A X

void calcula_e_ElevadoAX(){
    double x = funcaoRecebeX();
    double result = 0;
    result = pow(E, x);
    printf(" f(%f) = %lf \n", x, result);
    pauseAndClear();
}

//LN(X)

void calculaLnX(){
    double x = funcaoRecebeX();
    if(x > 0){
        double result = 0;
        result = log(x);
        printf(" f(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
         printf("Valor de x invalido, tente novamente \n\n");
        calculaLnX();
    }
}

void derivadaLnX(){
    double x = funcaoRecebeX();
    if(x != 0){
        double result = 0;
        result = 1 / x;
        printf(" f'(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de x invalido, tente novamente \n\n");
        derivadaLnX();
    }
}

//1/X

void calculaUmSobreX(){
    double x = funcaoRecebeX();
    if(x != 0){
        double result = 0;
        result = 1 / x;
        printf(" f(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de x invalido, tente novamente \n\n");
        calculaUmSobreX();
    }
}

void derivadaUmSobreX(){
    double x = funcaoRecebeX();
    if(x != 0){
        double result = 0;
        result = -1 / (pow(x, 2));
        printf(" f'(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de x invalido, tente novamente \n\n");
        derivadaUmSobreX();
    }
}

//SEN(X)

void calculaSenX(){
    double x = funcaoRecebeX();
    double result = 0;
    result = sin(grausParaRadianos(x));
    printf(" f(%f) = %lf \n", x, result);
    pauseAndClear();
}

void derivadaSenx(){
    double x = funcaoRecebeX();
    double result = 0;
    result = cos(x);
    printf(" f(%f) = %lf \n", x, result);
    pauseAndClear();
}

//COS(X)

void calculaCosX() {
    double x = funcaoRecebeX();
    double result = 0;
    result = cos(grausParaRadianos(x));
    printf(" f(%f) = %lf \n", x, result);
    pauseAndClear();
}

void derivadaCosX(){
    double x = funcaoRecebeX();
    double result = 0;
    result = -sin(x);
    printf(" f'(%f) = %lf \n", x, result);
    pauseAndClear();
}

//TG(X)

void calculaTgX(){
    double x = funcaoRecebeX();
    if(validaTgGraus(x)){
        double result = 0;
        result = tan(grausParaRadianos(x));
        printf(" f(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de x invalido, tente novamente \n\n");
        calculaTgX();
    }
}

void derivadaTgX(){
    double x = funcaoRecebeX();
    if(validaTgRad(x)){
        double result = 0;
        result = pow(1 / cos(x), 2);
        printf(" f'(%f) = %lf \n", x, result);
        pauseAndClear();
    } else {
        printf("Valor de x invalido, tente novamente \n\n");
        derivadaTgX();
    }
}

int validaTgRad(double tg){
    for(int i = 0; i <= tg; i++){
        if((PI/2 + PI * (double)i) == tg){
            return 0;
        }
    }
    return 1;
}

int validaTgGraus(double tg){
    int q = tg /90;
    if(q % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}




