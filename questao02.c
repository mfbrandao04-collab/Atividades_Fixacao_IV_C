#include <stdio.h> 
int main (){

int opcao;
printf ("1 - Saldo\n");
printf ("2 - Extrato\n");
printf ("3 - Transferencia\n");
printf ("4 - Pagamento\n");
printf ("5 - Emprestimo\n");
printf ("6 - Encerrar\n");

printf ("Informe o tipo de atendimento: \n ");
scanf ("%d", &opcao);

switch (opcao) {
    case 1:
        printf ("Saldo selecionado. ");
        break;

    case 2: 
        printf ("Extrato selecionado. ");
        break;

    case 3: 
        printf ("Transferencia selecionada. ");
        break;

    case 4:
        printf ("Pagamento selecionado. ");
        break;

    case 5:
        printf ("Emprestimo selecionado. ");
        break;

    case 6:
        printf ("Encerrando o programa. ");
        break;

    default:
        printf ("Opcao invalida. ");
        break;
    }
    return 0;

}
