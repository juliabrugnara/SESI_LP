#include <stdio.h>

int main() {
    int i = 1;
    
    // PQ: O 'do' garante que o codigo rode 1 vez antes de perguntar o limite.
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);
    
    return 0;
}