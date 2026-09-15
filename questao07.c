#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Faixa etaria: Crianca.\n");

    } else if (idade <= 17) {
        printf("Faixa etaria: Adolescente.\n");

    } else if (idade <= 59) {
        printf("Faixa etaria: Adulto.\n");

    } else {
        printf("Faixa etaria: Idoso.\n");
    }

    printf("E maior de idade? %s\n",
           idade >= 18 ? "Sim" : "Nao");

    return 0;
}