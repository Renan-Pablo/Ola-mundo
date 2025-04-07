// Gerenciamento de Estudantes.
#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("* Menu de Gerenciamento do Estudante *\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        // Entrada das notas
        printf("Digite sua Nota1: ");
        scanf("%f", &nota1);
        printf("Digite sua Nota2: ");
        scanf("%f", &nota2);
        // Calculo das notas
        media = (nota1 + nota2)/2;
        printf("Sua Média foi: %.2f\n", media);
        break;
    case 2:
        // Determinação do status com base na média.
        printf("Digite a Média do Aluno: ");
        scanf("%f", &media);
        if (media >= 6.0){
            printf("Status: Aprovado!\n");
        } else if (media >= 5.0){
            printf("Status: Recuperação.\n");
        } else{
            printf("Status: Reprovado!\n");
        }
        break;
    case 3:
        printf("Saindo do Menu...\n");
        break; 
    default:
        printf("Opção inválida. Tente novamente...\n");
        break;
    }



    return 0;
}
