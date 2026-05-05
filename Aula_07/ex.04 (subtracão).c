#include <stdio.h>

int subtracaoDeDoisValores(int a, int b){
    return a - b;
}

int main(){
    int n1, n2;
    int subtracao=0;
    
    printf("Digite o primeiro valor:");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor:");
    scanf("%i", &n2);
    
    //subtracao = n1 - n2;
    subtracao = subtracaoDeDoisValores(n1, n2);
    
    
    printf("A subtracao dos dois valores: %i", subtracao);
    printf("\n 5 - 5 = %i", subtracaoDeDoisValores(5, 5));
    printf("\n 3 - 15 = %i", subtracaoDeDoisValores(3, 15));
    
}

