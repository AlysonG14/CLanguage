#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
    float peso;
} Pessoa;

void cadastrar(Pessoa pessoas[], int *qtd);
void mostrar(Pessoa pessoas[], int qtd);
void ordenarPeso(Pessoa pessoas[], int qtd);
void ordenarData(Pessoa pessoas[], int qtd);
void ordenarNome(Pessoa pessoas[], int qtd);
void salvarArquivo(Pessoa pessoas[], int qtd);
void lerArquivo();

int main() {
    Pessoa pessoas[MAX];
    int qtd = 0;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar pessoa\n");
        printf("2 - Mostrar ordem de cadastro\n");
        printf("3 - Ordenar por peso\n");
        printf("4 - Ordenar por data\n");
        printf("5 - Ordenar por nome\n");
        printf("6 - Salvar arquivo\n");
        printf("7 - Ler arquivo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrar(pessoas, &qtd);
                break;

            case 2:
                mostrar(pessoas, qtd);
                break;

            case 3:
                ordenarPeso(pessoas, qtd);
                break;

            case 4:
                ordenarData(pessoas, qtd);
                break;

            case 5:
                ordenarNome(pessoas, qtd);
                break;

            case 6:
                salvarArquivo(pessoas, qtd);
                break;

            case 7:
                lerArquivo();
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}

void cadastrar(Pessoa pessoas[], int *qtd) {

    if(*qtd >= MAX) {
        printf("Limite de 10 pessoas atingido!\n");
        return;
    }

    printf("\nNome: ");
    scanf("%s", pessoas[*qtd].nome);

    printf("Data de aniversario (dd mm aaaa): ");
    scanf("%d %d %d",
          &pessoas[*qtd].dia,
          &pessoas[*qtd].mes,
          &pessoas[*qtd].ano);

    printf("Peso: ");
    scanf("%f", &pessoas[*qtd].peso);

    (*qtd)++;

    printf("Pessoa cadastrada com sucesso!\n");
}

void mostrar(Pessoa pessoas[], int qtd) {

    if(qtd == 0) {
        printf("Nenhum cadastro encontrado.\n");
        return;
    }

    printf("\n===== DADOS =====\n");

    for(int i = 0; i < qtd; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Data: %02d/%02d/%04d\n",
               pessoas[i].dia,
               pessoas[i].mes,
               pessoas[i].ano);
        printf("Peso: %.2f kg\n\n", pessoas[i].peso);
    }
}

void ordenarPeso(Pessoa pessoas[], int qtd) {

    Pessoa aux;

    for(int i = 0; i < qtd - 1; i++) {
        for(int j = i + 1; j < qtd; j++) {
            if(pessoas[i].peso > pessoas[j].peso) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }

    printf("\n===== ORDENADO POR PESO =====\n");
    mostrar(pessoas, qtd);
}

void ordenarData(Pessoa pessoas[], int qtd) {

    Pessoa aux;

    for(int i = 0; i < qtd - 1; i++) {
        for(int j = i + 1; j < qtd; j++) {

            int data1 = pessoas[i].ano * 10000 +
                        pessoas[i].mes * 100 +
                        pessoas[i].dia;

            int data2 = pessoas[j].ano * 10000 +
                        pessoas[j].mes * 100 +
                        pessoas[j].dia;

            if(data1 > data2) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }

    printf("\n===== ORDENADO POR DATA =====\n");
    mostrar(pessoas, qtd);
}

void ordenarNome(Pessoa pessoas[], int qtd) {

    Pessoa aux;

    for(int i = 0; i < qtd - 1; i++) {
        for(int j = i + 1; j < qtd; j++) {

            if(strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }

    printf("\n===== ORDENADO POR NOME =====\n");
    mostrar(pessoas, qtd);
}

void salvarArquivo(Pessoa pessoas[], int qtd) {

    FILE *arquivo = fopen("pessoas.txt", "w");

    if(arquivo == NULL) {
        printf("Erro ao criar arquivo.\n");
        return;
    }

    for(int i = 0; i < qtd; i++) {
        fprintf(arquivo,
                "%s %d %d %d %.2f\n",
                pessoas[i].nome,
                pessoas[i].dia,
                pessoas[i].mes,
                pessoas[i].ano,
                pessoas[i].peso);
    }

    fclose(arquivo);

    printf("Arquivo salvo com sucesso!\n");
}

void lerArquivo() {

    FILE *arquivo = fopen("pessoas.txt", "r");

    if(arquivo == NULL) {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    Pessoa p;

    printf("\n===== DADOS DO ARQUIVO =====\n");

    while(fscanf(arquivo,
                 "%s %d %d %d %f",
                 p.nome,
                 &p.dia,
                 &p.mes,
                 &p.ano,
                 &p.peso) == 5) {

        printf("Nome: %s\n", p.nome);
        printf("Data: %02d/%02d/%04d\n",
               p.dia,
               p.mes,
               p.ano);
        printf("Peso: %.2f kg\n\n", p.peso);
    }

    fclose(arquivo);
}
