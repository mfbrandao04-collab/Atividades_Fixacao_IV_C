#include <stdio.h>
int main (){
    int opcao;
    printf ("1 - Administrador. \n");
    printf ("2 - Gerente. \n");
    printf ("3- Analista. \n");
    printf ("4 - Desenvolvedor. \n");
    printf ("5 - Usuário. \n");

    printf ("Informe o tipo de usuario: \n");
    scanf ("%d", &opcao);

    switch (opcao){
        case 1: 
            printf ("Administrador selecionado. \n");
            break;
        case 2: 
            printf ("Gerente selecionado. \n");
            break;
        case 3: 
            printf ("Analista selecionado. \n");
            break;
        case 4: 
            printf ("Desenvolvedor selecionado. \n");
            break;
        case 5: 
            printf ("Usuário selecionado. \n");
            break;
        default:
            printf ("Opção inválida. \n");
    }
    return 0;
}