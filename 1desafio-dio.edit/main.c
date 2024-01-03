#include<stdio.h>
int main() {
    // Defina o nome e a quantidade de experiência (XP) do herói
    char nomeDoHeroi[50];
    int experienciaDoHeroi;

    printf("Digite o nome do herói: ");
    scanf("%s", nomeDoHeroi);

    printf("Digite a quantidade de experiência do herói: ");
    scanf("%d", &experienciaDoHeroi);

    // Utilize uma estrutura de decisão para determinar o nível do herói com base na XP
    char nivelDoHeroi[20];

    if (experienciaDoHeroi < 1000) {
        sprintf(nivelDoHeroi, "Ferro");
    } else if (experienciaDoHeroi >= 1001 && experienciaDoHeroi <= 2000) {
        sprintf(nivelDoHeroi, "Bronze");
    } else if (experienciaDoHeroi >= 2001 && experienciaDoHeroi <= 5000) {
        sprintf(nivelDoHeroi, "Prata");
    } else if (experienciaDoHeroi >= 5001 && experienciaDoHeroi <= 7000) {
        sprintf(nivelDoHeroi, "Ouro");
    } else if (experienciaDoHeroi >= 7001 && experienciaDoHeroi <= 8000) {
        sprintf(nivelDoHeroi, "Platina");
    } else if (experienciaDoHeroi >= 8001 && experienciaDoHeroi <= 9000) {
        sprintf(nivelDoHeroi, "Ascendente");
    } else if (experienciaDoHeroi >= 9001 && experienciaDoHeroi <= 10000) {
        sprintf(nivelDoHeroi, "Imortal");
    } else {
        sprintf(nivelDoHeroi, "Radiante");
    }

    // Exibir mensagem com o nome do herói e seu nível
    printf("O Herói de nome %s está no nível de %s\n", nomeDoHeroi, nivelDoHeroi);

    return 0;
}

