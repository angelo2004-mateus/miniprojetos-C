#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 10
#define MAX_NAME_LENGTH 30

struct AgendaEntry {
    char nome[MAX_NAME_LENGTH];
};

void printEntry(struct AgendaEntry entry) {
    printf("Nome: %s\n", entry.nome);
}

int main() {
    struct AgendaEntry agenda[MAX_ENTRIES];
    int numEntries = 0;

    int opcao = 0;

    while (opcao != 3) {
        printf("Menu:\n");
        printf("1. Inserir novo nome na agenda\n");
        printf("2. Imprimir dados de uma pessoa cadastrada\n");
        printf("3. Fim\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (numEntries < MAX_ENTRIES) {
                printf("Digite o nome: ");
                scanf("%s", agenda[numEntries].nome);
                numEntries++;
            } else {
                printf("Agenda cheia. Impossivel adicionar novos nomes.\n");
            }
        } else if (opcao == 2) {
            if (numEntries > 0) {
                int index;
                printf("Digite o indice da pessoa (0 a %d): ", numEntries - 1);
                scanf("%d", &index);
                if (index >= 0 && index < numEntries) {
                    printEntry(agenda[index]);
                } else {
                    printf("Indice invalido.\n");
                }
            } else {
                printf("Agenda vazia. Nenhum nome cadastrado.\n");
            }
        } else if (opcao != 3) {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
