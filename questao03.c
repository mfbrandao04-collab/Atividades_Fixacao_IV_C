#include <stdio.h>
int main(){
float valorTotal, desconto, valordesconto, valorfinal;
    printf ("Digite o valor da compra: \n");
    scanf ("%f", &valorTotal);

    if (valorTotal <= 500){
        desconto = 0;
        printf ("Sem desconto.\n");

    } else if (valorTotal > 500.01 && valorTotal <= 1000){
        desconto = 0.05;
        printf ("Desconto de 5%%.\n");

    } else if (valorTotal > 1000.01 && valorTotal <= 2000){
        desconto = 0.10;
        printf ("Desconto de 10%%.\n");

    } else if (valorTotal > 2000){
        desconto = 0.15;
        printf ("Desconto de 15%%.\n");
    }
    valordesconto = valorTotal * desconto;
    valorfinal = valorTotal - valordesconto;

    printf ("Valor original: R$ %.2f\n", valorTotal);
    printf ("Valor do desconto: R$ %.2f\n", valordesconto);
    printf ("Percentual de desconto aplicado: %.2f%%\n", desconto * 100);
    printf ("Valor final a ser pago: R$ %.2f\n", valorfinal);
    return 0;

}