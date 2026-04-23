#include <stdio.h>  

void classificacao (float m){

    if (m >= 6 && m <=10){
        printf("aprovado"); 
    }else if (m < 6 && m >= 4){
        printf("recuperacao");
    }else{
        printf("reprovado");
    } 


    
}
    

float media_aritimetica (float nota1, float nota2){
    return (nota1 + nota2) / 2;
}
int main() {
    int opcao;
    float n1, n2, media;

    printf("1 - Calculo de media\n");
    printf("2 - Classificacao do aluno\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: printf("Calculo de media\n");
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