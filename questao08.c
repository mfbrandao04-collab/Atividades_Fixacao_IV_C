#include <stdio.h>

int main() {

    int opcao;
    float valorCompra, percentual, valorDesconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\n1 - PIX\n");
    printf("2 - Debito\n");
    printf("3 - Credito\n");
    printf("4 - Boleto\n");

    printf("Digite a forma de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Forma de pagamento: PIX\n");
            percentual = 0.20;
            break;

        case 2:
            printf("Forma de pagamento: Debito\n");
            percentual = 0.15;
            break;

        case 3:
            printf("Forma de pagamento: Credito\n");
            percentual = 0.05;
            break;

        case 4:
            printf("Forma de pagamento: Boleto\n");
            percentual = 0.10;
            break;

        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    valorDesconto = valorCompra * percentual;
    valorFinal = valorCompra - valorDesconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentual * 100);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}