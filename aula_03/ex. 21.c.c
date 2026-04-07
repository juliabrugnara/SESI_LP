#include <stdio.h>
int main() {
    int opcao;
    do {
        printf("\n--- MENU ---\n1: Dizer 'Ola'\n2: Dizer 'Tudo bem?'\n3: Sair\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao == 1) printf("Ola!\n");
        else if(opcao == 2) printf("Tudo bem?\n");
        // PQ: O laço continua enquanto a opcao for DIFERENTE de 3.
    } while(opcao != 3); 
    
    printf("Programa encerrado.");
    return 0;
}