#include <stdio.h>
#include <string.h>

int main() {
    int numAlunos, numProvas;
    float nota, somaNotas, media, maiorNota, menorNota;
    float somaMediasTurma = 0, maiorMedia = -1.0, menorMedia = 11.0;
    char nome[50], melhorAluno[50], piorAluno[50], situacao[20];

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    // Loop para cada aluno
    for (int i = 1; i <= numAlunos; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Nome: ");
        // O " %[^\\n]" lê a linha inteira incluindo espaços e limpa o buffer
        scanf(" %[^\n]s", nome); 

        printf("Quantidade de provas: ");
        scanf("%d", &numProvas);

        somaNotas = 0;
        maiorNota = -1.0;
        menorNota = 11.0;

        // Loop para as notas de cada aluno
        for (int j = 1; j <= numProvas; j++) {
            printf("Nota %d: ", j);
            scanf("%f", &nota);

            somaNotas += nota;

            if (nota > maiorNota) maiorNota = nota;
            if (nota < menorNota) menorNota = nota;
        }

        media = somaNotas / numProvas;
        somaMediasTurma += media;

        // Define a situacao
        if (media >= 7.0) strcpy(situacao, "Aprovado");
        else if (media >= 5.0) strcpy(situacao, "Recuperacao");
        else strcpy(situacao, "Reprovado");

        // Exibe resultado individual
        printf("Resultado: %s | Media: %.2f | Maior: %.2f | Menor: %.2f | %s\n",
               nome, media, maiorNota, menorNota, situacao);

        // Verifica quem e o melhor e o pior da turma
        if (media > maiorMedia) {
            maiorMedia = media;
            strcpy(melhorAluno, nome);
        }
        if (media < menorMedia) {
            menorMedia = media;
            strcpy(piorAluno, nome);
        }
    }

    // Relatorio Final
    if (numAlunos > 0) {
        printf("\n=======================\n");
        printf("    RELATORIO FINAL    \n");
        printf("=======================\n");
        printf("Media Geral da Turma: %.2f\n", somaMediasTurma / numAlunos);
        printf("Melhor Aluno: %s (Media: %.2f)\n", melhorAluno, maiorMedia);
        printf("Pior Aluno: %s (Media: %.2f)\n", piorAluno, menorMedia);
    }

    return 0;
}