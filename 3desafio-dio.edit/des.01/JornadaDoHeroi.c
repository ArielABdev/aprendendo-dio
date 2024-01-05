
int main() {
    int posicaoInicial, totalPassos;

    // Entrada da posição inicial e do número total de passos
    printf("Digite a posição inicial do herói na floresta: ");
    scanf("%d", &posicaoInicial);

    printf("Digite o número total de passos que o herói deve dar: ");
    scanf("%d", &totalPassos);

    // Calculando a posição final
    int posicaoFinal = posicaoInicial + totalPassos;

    // Saída da posição final do herói
    printf("A posição final do herói após dar %d passos é: %d\n", totalPassos, posicaoFinal);

    return 0;
}
