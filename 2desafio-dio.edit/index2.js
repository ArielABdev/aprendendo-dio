// Função para determinar o nível do jogador com base na quantidade de vitórias
function calcularNivel(vitorias, derrotas) {
    const saldoVitorias = vitorias - derrotas;
    let rank;

// parte pra definir o rank
    if (vitorias < 10) {
        rank = "Ferro";
    } else if (vitorias >= 11 && vitorias <= 20) {
        rank = "Bronze";
    } else if (vitorias >= 21 && vitorias <= 50) {
        rank = "Prata";
    } else if (vitorias >= 51 && vitorias <= 80) {
        rank = "Ouro";
    } else if (vitorias >= 81 && vitorias <= 90) {
        rank = "Diamante";
    } else if (vitorias >= 91 && vitorias <= 100) {
        rank = "Lendário";
    } else {
        rank = "Imortal";
    }

    return `O Herói tem um saldo de ${saldoVitorias} vitorias e está no ${rank}`;
}

// Exemplo de utilização da função
const vitoriasDoJogador = 70;
const derrotasDoJogador = 30;

const resultado = calcularNivel(vitoriasDoJogador, derrotasDoJogador);
console.log(resultado);