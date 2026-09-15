#include <stdio.h>
int main (){
    int opcao;
    printf("1 - Moticleta. \n");
    printf("2 - Automovel. \n");
    printf("3 - Van. \n");
    printf("4 - Onibus. \n");
    printf("5 - Caminhao. \n");
    
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Opcao escolhida: Motocicleta. \n");

            break;
        case 2:
            printf("Opcao escolhida: Automovel. \n");
            break;
        case 3:
            printf("Opcao escolhida: Van. \n");
            break;
        case 4:
            printf("Opcao escolhida: Onibus. \n");
            break;
        case 5:
            printf("Opcao escolhida: Caminhao. \n");
            break;
        default:
            printf("Opcao invalida. \n");
    }
    printf("o veículo é classificado como veículo pesado?  %s\n",
           (opcao == 4 || opcao == 5) ? "Sim" : "Nao");
}