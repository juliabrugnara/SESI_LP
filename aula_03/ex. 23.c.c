#include <stdio.h>
int main() {
    for(int i = 1; i <= 100; i++) {
        // PQ: O símbolo '&&' significa "E". A condicao so e verdade se for divisivel pelos dois.
        if(i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}