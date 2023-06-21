#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra1[50];
    char palavra2[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2)== 0){
           printf("SAO IGUAIS");
    }else {
    printf("SAO DIFERENTES");
    }




    return 0;
}
