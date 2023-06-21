#include <stdio.h>
#include <string.h>




int main() {
    char palavra1[30];
    char palavra2[30];
    char palavra3[30];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

     printf("Palavras invertidas: %s %s %s\n", palavra3, palavra2, palavra1);

    return 0;
}
