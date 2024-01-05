//Programa para calcular a posição do heroi em um jogo

function jornadaHeroi(posicaoInicial, totalPassos) {
    // Calculando a posição final
    const posicaoFinal = posicaoInicial + totalPassos;

    // Retornando a posição final do herói
    return `A posição final do herói após dar ${totalPassos} passos é: ${posicaoFinal}`;
}

// Exemplo de uso da função
const posicaoInicial = 10;
const totalPassos = 15;

const resultadoJornada = jornadaHeroi(posicaoInicial, totalPassos);
console.log(resultadoJornada);
