#include <stdio.h>

int main() {

    int setor, prioridade;

    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Desenvolvimento\n");

    printf("Digite o setor: ");
    scanf("%d", &setor);

    switch (setor) {
        case 1:
            printf("Setor: Suporte Tecnico\n");
            break;

        case 2:
            printf("Setor: Financeiro\n");
            break;

        case 3:
            printf("Setor: Recursos Humanos\n");
            break;

        case 4:
            printf("Setor: Comercial\n");
            break;

        case 5:
            printf("Setor: Desenvolvimento\n");
            break;

        default:
            printf("Setor invalido.\n");
            return 0;
    }

    printf("\n1 - Baixa\n");
    printf("2 - Media\n");
    printf("3 - Alta\n");

    printf("Digite a prioridade: ");
    scanf("%d", &prioridade);

    switch (prioridade) {
        case 1:
            printf("Prioridade: Baixa\n");
            break;

        case 2:
            printf("Prioridade: Media\n");
            break;

        case 3:
            printf("Prioridade: Alta\n");
            break;

        default:
            printf("Prioridade invalida.\n");
            return 0;
    }

    printf("Atendimento prioritario: %s\n",
           prioridade == 3 ? "Sim" : "Nao");

    return 0;
}