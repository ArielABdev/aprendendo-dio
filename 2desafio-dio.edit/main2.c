//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <cstdio>
// Variáveis globais

int saldov;
char* rank;

// Inicialização das funções
int contsaldovitorias(int w, int d);
void inforank();

int main() {
    system("color A");

    char name[16];
    int won, def;

    printf("Hello, player\n");
    printf("Please, digit your nick name: ");
    fgets(name, 15, stdin);
    printf("Nice to meet you %s\nEnter your number of victories and defeats: ", name);

    printf("Digit the number of VICTORIES: ");
    scanf("%d", &won);
    printf("\nDigit the number of DEFEATS: ");
    scanf("%d", &def);

    contsaldovitorias(won, def);
    printf("%s, you have a victory balance of %d, so your RANK is:\n%s\n", name, saldov, rank);

    return 0;
}

int contsaldovitorias(int w, int d) {
    saldov = w - d;
    inforank();
    return 0;
}

void inforank() {
    if (saldov < 11) {
        rank = "Pena";
    } else if (saldov > 10 && saldov < 21) {
        rank = "FERRO";
    } else if (saldov > 20 && saldov < 51) {
        rank = "PRATA";
    } else if (saldov > 50 && saldov < 81) {
        rank = "OURO";
    } else if (saldov > 80 && saldov < 91) {
        rank = "DIAMANTE";
    } else if (saldov > 90 && saldov < 101) {
        rank = "PLATINA";
    } else {
        rank = "IMORTAL";
    }
}