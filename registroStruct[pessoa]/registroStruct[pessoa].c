#include <stdio.h>

struct pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{
    int i, n=1;
    struct pessoa lista[5]={{0, 0, 0,
                             0, 0, 0,
                             0, 0, 0,
                             0, 0, 0,
                             0, 0, 0,}};

    printf("Registre 5 nomes, idades e alturas\n");
    printf("==================================\n");


    for(i = 0; i < 5; i++)
    {
        printf("\nDigite o %d nome: ", n);
        scanf("%s", &lista[i].nome);

        printf("Digite a %d idade: ", n);
        scanf("%d", &lista[i].idade);

        printf("Digite a %d altura: ", n);
        scanf("%f", &lista[i].altura);

        n++;
    }

    printf("\nImprimindo oque foi digitado...\n");

    for(i = 0; i < 5; i++)
    {
        printf("[%d] Nome: %-30s, Idade: %3d, Altura: %1.2f \n", n, lista[i].nome, lista[i].idade, lista[i].altura );
        n++;
    }
}
