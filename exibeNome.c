#include <stdio.h>

int main(){
    char nome[15];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Ola, seja bem-vindo %s \n", nome);

    return 0;
}
