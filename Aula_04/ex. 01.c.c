#include <stdio.h> // Biblioteca padrão para entrada (scanf) e saída (printf)

int main() {
    // Declaramos um array de floats (números reais) com 10 posições
    float notas[10];
    float soma = 0, media;
    int acima = 0;

    printf("--- Registro de Notas ---\n");

    // PRIMEIRO LOOP: Entrada de dados
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        
        /* scanf precisa do %f para saber que vai ler um float.
           O '&' (e comercial) é o operador de endereço: ele diz ao C 
           EXATAMENTE em qual gaveta da memória salvar o valor. */
        scanf("%f", &notas[i]);
        
        // Acumulamos a nota na variável soma para calcular a média depois
        soma += notas[i]; 
    }

    // Calculamos a média simples
    media = soma / 10;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Notas acima da media:\n");

    // SEGUNDO LOOP: Verificação
    /* Precisamos percorrer o array de novo porque só sabemos a média 
       DEPOIS que o primeiro loop termina. */
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("- %.2f\n", notas[i]); // Exibe a nota com 2 casas decimais
            acima++; // Incrementa o contador de alunos
        }
    }

    printf("Total de alunos acima da media: %d\n", acima);

    return 0; // Indica que o programa terminou com sucesso
}