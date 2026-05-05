#include <stdio.h>

int multiplicacaoDeDoisValores(int a, int b){
    return a * b;
}

int main(){
    int n1, n2;
    int multiplicao=0;
    
    printf("Digite o primeiro valor:");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor:");
    scanf("%i", &n2);
    
    //multiplicao = n1 + n2;
    multiplicao = multiplicacaoDeDoisValores(n1, n2);
    
    
    printf("A multiplicao dos dois valores: %i", multiplicao);
    printf("\n 5 * 5 = %i", multiplicacaoDeDoisValores(5, 5));
    printf("\n 3 * 15 = %i", multiplicacaoDeDoisValores(3, 15));
    
}

