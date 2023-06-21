#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int vetor[10];

    for(i = 0; i <= 4; i++){
        printf("Digite um valor: ");
        scanf("%i", &vetor[i]);
    }


            for(i = 4; i >= 0; i--){
                printf("%i,", vetor[i]);
            }

    return 0;
}
