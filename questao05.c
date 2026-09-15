#include <stdio.h>

int main() {

    int idade;
    float renda, valorSolicitado;
    int apto;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o valor solicitado: ");
    scanf("%f", &valorSolicitado);

    if (idade < 18) {
        printf("Credito nao permitido.\n");
        apto = 0;

    } else if (renda < 2000) {
        printf("Credito nao recomendado.\n");
        apto = 0;

    } else if (renda < 5000) {
        printf("Analise adicional.\n");
        apto = 1;

    } else {
        printf("Credito pre-aprovado.\n");
        apto = 1;
    }

    printf("Cliente apto para prosseguir? %s\n", apto ? "Sim" : "Nao");

    return 0;
}