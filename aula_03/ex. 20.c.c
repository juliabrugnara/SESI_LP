#include <stdio.h>
int main() {
    int senha;
    int correta =1997; // PQ: Definimos a senha fixa aqui.
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(senha != correta) {
            printf("Senha Incorreta! Tente de novo.\n");
        }
    } while(senha != correta); // PQ: O laço repete enquanto a senha for diferente da correta.
    printf("Acesso Permitido!");
    return 0;
}