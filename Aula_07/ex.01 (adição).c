#include <stdio.h>

int somaDeDoisValores(int a, int b){
    return a + b;
}

int main(){
    int n1, n2;
    int soma=0;
    
    printf("Digite o primeiro valor:");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor:");
    scanf("%i", &n2);
    
    //soma = n1 + n2;
    soma = somaDeDoisValores(n1, n2);
    
    
    printf("A soma dos dois valores: %i", soma);
    printf("\n 5 + 5 = %i", somaDeDoisValores(5, 5));
    printf("\n 3 + 15 = %i", somaDeDoisValores(3, 15));
    
}

