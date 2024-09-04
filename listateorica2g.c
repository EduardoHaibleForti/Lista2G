#include <stdio.h>
#include <stdlib.h>

int main (){
    float pressao;
    float volume;
    float temperatura;
    float massaDeAr;

    printf("Digite o valor da pressao do pneu :");
    scanf("%f",&pressao);

    printf("Digite o valor do volume do pneu :");
    scanf("%f",&volume);

    printf("Digite o valor da temperatura do pneu :");
    scanf("%f",&temperatura);

    massaDeAr=(pressao*volume)/(0.37*temperatura +170.2);

    printf("A massa de ar do pneu : %f\n",massaDeAr);

    return 0;
}
