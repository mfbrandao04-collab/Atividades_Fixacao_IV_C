#include <stdio.h>
int main(){
    int notaTotal, nota1, nota2, nota3, nota4;
    
    printf ("Digite a primeira nota: \n");
    scanf ("%d", &nota1);
    printf ("Digite a segunda nota: \n");
    scanf ("%d", &nota2);
    printf ("Digite a terceira nota: \n");
    scanf ("%d", &nota3);
    printf ("Digite a quarta nota: \n");
    scanf ("%d", &nota4);
    
    notaTotal = (nota1 + nota2 + nota3+ nota4)/4;
    scanf("%d", &notaTotal);
    
    if (notaTotal >= 9) {
        printf("Excelente\n");
    } else if (notaTotal >= 7) {
        printf("Bom\n");
    } else if (notaTotal >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    printf ("%s", notaTotal >= 5 ? "Aprovado" : "Reprovado");

    return 0;

}
