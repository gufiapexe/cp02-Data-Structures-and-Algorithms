#include <stdio.h>  

float media_aritimetica (float nota1, float nota2){
    return (nota1 + nota2) / 2;
}
int main() {
    int opcao;
    float n1, n2, media;

    printf("1 - Cálculo de média\n");
    printf("2 - Classificação do aluno\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: printf("Cálculo de média\n");
        printf("Digite sua primeira nota: \n");
        scanf("%f", &n1);
        printf("Digite sua segunda nota: \n");
        scanf("%f", &n2);
        media = media_aritimetica(n1, n2);
        printf("A nota do aluno e: %2.f", media);
        break;

    }

    
    return 0;
}