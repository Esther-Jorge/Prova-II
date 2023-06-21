#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

struct ficha
{
    char nome[250], email[250], telefone[9];
    int idade;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha pessoa;
    int opcao;
    printf("Coloque seu nome:\n");
    gets(pessoa.nome);
    printf("Coloque seu email :\n");
    gets(pessoa.email);
    printf("Coloque seu telefone:\n");
    gets(pessoa.telefone);
    printf("Coloque sua idade:\n");
    scanf("%i", &pessoa.idade);

    system("CLS");

    do
    {
        printf("1- Mostrar nome e idade:\n");
        printf("2- Mostrar nome e e-mail:\n");
        printf("3- Mostrar nome e telefone:\n");
        printf("4- Mostrar todas informacao:\n");
        printf("0- Sai do progama:\n");

        printf("Escolha uma opcao acima: \n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("Nome: %s\n", pessoa.nome);
            printf("Idade: %d\n", pessoa.idade);
            break;
        case 2:
            printf("Nome: %s\n", pessoa.nome);
            printf("E-mail: %s\n", pessoa.email);
            break;
        case 3:
            printf("Nome: %s\n", pessoa.nome);
            printf("Telefone: %s\n", pessoa.telefone);
            break;
        case 4:
            printf("Nome: %s\n", pessoa.nome);
            printf("Idade: %d\n", pessoa.idade);
            printf("E-mail: %s\n", pessoa.email);
            printf("Telefone: %s\n", pessoa.telefone);
            break;
        case 0:
            printf("Saindo do programa...");
            break;

        default:
            printf("Opção incorreta, tente novamente! ");
            break;
        }

        sleep(3);
        system("cls");
    } while (opcao != 0);
}
