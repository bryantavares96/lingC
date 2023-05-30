#include <stdio.h>
#include <stdlib.h>

// Em um acampamento a 3 grupos " A, B e C"
// grupo A - varia da idade de 7 anos a 9 anos/ grupo B - 10 a 15 anos e
// grupo C - até 17 anos
// Lembrando que pra entrar no mesmo, o aluno tem que apresentar nome e idade.

int main()
{
    int idade;
    char nome[50];

    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    // Condição IF
    if (idade >= 7 || idade <= 9){
        printf("Nome ", nome);
        printf("Idade: ", idade);
        printf("Permitida entrada Grupo A");
    }
    else if (idade >= 10 || idade <= 15){
        printf("Nome ", nome);
        printf("Idade: ", idade);
        printf("Permitida entrada Grupo B ");
    }
    else if (idade > 15 || idade <= 17){
        printf("Nome ", nome);
        printf("Idade: ", idade);
        printf("Permitida entrada Grupo C \n");
    }
    else{
        printf("Nome ", nome);
        printf("Idade: ", idade);
        printf("Grupo não adequado pra essa idade. ");
    }
    // Com Do{}while(!=)


    return 0;
}
