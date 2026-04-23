#include "stdio.h" //falta o "<>"

int main() {
    float nota1, nota2, media //falta o ";"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2); //falta o "& no nota2"

    media = nota1 + nota2 / 2;

    if (media = 6) { //Tem um erro de lógica, pois o aluno nesse caso só seria aprovado com a nota 6, o certo seria >= 6.
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}